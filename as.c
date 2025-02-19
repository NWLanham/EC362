
//
// Assembler code fragment for RiSC-16 
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXSTRLEN 100
#define MAX_LABELS 100

#define ADD		0
#define ADDI	1
#define NAND	2
#define LW  	4
#define SW  	5
#define BEZ  	6
#define JALR	7

#define	HALT	"0x70ff"

#define ntoi(str)	strtol(str, NULL, 0)

#define TERM	"\n\t "
#define get_first_item(x)	strtok(x, TERM)
#define get_next_item()		strtok(NULL, TERM)

struct {
	char	name[MAXSTRLEN];
	int		addr;
} Labels[MAX_LABELS];
int NumLabels=0;

char Line[MAXSTRLEN+1];
int Annotate = 0;

#define Debug 1

#define HI	{ printf("line %d\n", __LINE__); fflush(stdout); }

int find_label(char *cp) 
{
	for ( int i = 0; i < NumLabels; i++){
		if(!strcmp(cp, Labels[i].name)){
			return Labels[i].addr;
		}
	}
	return -1;
}

char reg(char *cp)
{
	if (cp[0] == 'r') { 
		return ntoi(cp+1) & 0xF;
	} else {
		fprintf(stderr, "error: regval [%s] is not a register\n", cp);
		return -1;
	}
}

int imm(char *im)
{
	int immed = find_label(im);
	if (immed < 0) {	// no matching label - assume it is just a number
		if (isalpha(im[0])) {
			fprintf(stderr, "error: unrecognized immediate [%s]\n", im);
			exit(3);
		}
		return ntoi(im);
	} else {
		return immed;
	}
}

int output_imm(char *im)
{
	int immed = imm(im);
	if (Annotate) {
		printf("%04hx\t# %s\n", (short)(0xFFFF & (short)immed), Line);
	} else {
		printf("%04hx\n", (short)(0xFFFF & (short)immed));
	}

	return 1;
}

int output_4fields(int op, char A, char B, char C)
{
	if (Annotate) {
		printf("%x%x%x%x\t# %s\n", op & 0xF, A & 0xF, B & 0xF, C & 0xF, Line);
	} else {
		printf("%x%x%x%x\n", op & 0xF, A & 0xF, B & 0xF, C & 0xF);
	}

	return 1;
}

int output_3fields(int op, char A, char im)
{
	if (Annotate) {
		printf("%x%x%02x\t# %s\n", op & 0xF, A & 0xF, im & 0xFF, Line);
	} else {
		printf("%x%x%02x\n", op & 0xF, A & 0xF, im & 0xFF);
	}

	return 1;
}

int main(int argc, char *argv[])
{
	FILE *fp;
	char line[MAXSTRLEN+1];
	char *word, *rA, *rB, *rC, *im;
	int i, address;

	if (argc < 2) {
		printf("usage: %s [-a] <assembly-code-file> > <machine-code-file>\n", argv[0]);
		exit(1);
	}

	if (!strcmp("-a", argv[1])) {
		Annotate = 1;
		argv++;
	}

	if (( fp = fopen(argv[1], "r") ) == NULL) {
		printf("error in opening %s\n", argv[1]);
		exit(1);
	}

	address = 0;
	while (fgets(line, MAXSTRLEN, fp) != NULL) {
		// find the first "thing" in the line
		word = get_first_item(line);
		if (word == NULL) {		// line is empty
			continue;
		}
		// is the first thing a label? does it end in a ':' character? 
		if(word[strlen(word) - 1 ]== ':'){
			word[strlen(word) - 1] = '\0';
			strcpy(Labels[NumLabels].name, word);
			Labels[NumLabels].addr = address;
			NumLabels++;
			word = get_next_item();
		}
		if (word == NULL) {		// nothing else on the line
			continue;
		}
		// at this point, word -> the opcode
		if (Debug) printf("got op %s\n", word);
		if (!strcmp(word, "add")
				|| !strcmp(word, "addi")
				|| !strcmp(word, "nand")
				|| !strcmp(word, "lw")
				|| !strcmp(word, "sw")
				|| !strcmp(word, "bez")
				|| !strcmp(word, "jalr")
				|| !strcmp(word, "nop")
				|| !strcmp(word, "mov")
				|| !strcmp(word, ".fill")
				|| !strcmp(word, "halt")) {
					address++;

		} else if (!strcmp(word, "addi.l")
				|| !strcmp(word, "movi")
				|| !strcmp(word, "and")) {
				address +=2;

		} else if (!strcmp(word, "sub")
				|| !strcmp(word, "or")) {
				address += 3;

		} else {
			fprintf(stderr, "error: unrecognized opcode [%s] \n", word);
			exit(2);
		}
	}

	if (Debug) {
		printf("Found the following labels:\n");
		for (i=0; i<NumLabels; i++) {
			printf("\t%d. %s -> %d\n", i+1, Labels[i].name, Labels[i].addr);
		}
	}

	/* rewinds the file ptr */
	rewind(fp);
	address = 0;
	while (fgets(line, MAXSTRLEN, fp) != NULL) {
		line[strlen(line) - 1] = '\0';
		strncpy(Line, line, MAXSTRLEN);

		word = get_first_item(line);
		if (word == NULL) {
			continue;
		}
		if (word[strlen(word) - 1] == ':') {
			if (Debug) printf("word is a label - %s\n", word);
			word = get_next_item();
		}
		if (word == NULL) {
			continue;
		}
		// at this point, word -> the opcode
		if (Debug) printf("got op %s\n", word);

		if (!strcmp(word, "add")) {
			rA = get_next_item();
			rB = get_next_item();
			rC = get_next_item();
			address += output_4fields(ADD, reg(rA), reg(rB), reg(rC));
		} else if (!strcmp(word, "addi")) {
			rA = get_next_item();
			rB = get_next_item();
			im = get_next_item();
			address += output_4fields(ADDI, reg(rA), reg(rB), imm(im));
		} else if (!strcmp(word, "addi.l")) {
			rA = get_next_item();
			rB = get_next_item();
			im = get_next_item();
			address += output_4fields(ADDI, reg(rA), reg(rB), 0);
			address += output_imm(im);
		} else if (!strcmp(word, "nand")) {
			rA = get_next_item();
			rB = get_next_item();
			rC = get_next_item();
			address += output_4fields(NAND, reg(rA), reg(rB), reg(rC));
		} else if (!strcmp(word, "lw")) {
			rA = get_next_item();
			rB = get_next_item();
			im = get_next_item();
					int imm_value = find_label(im);
				if(imm_value <= 0){
					imm_value = ntoi(im);
				}
			address += output_4fields(LW, reg(rA), reg(rB), imm_value);
		} else if (!strcmp(word, "sw")) {
			rA = get_next_item();
			rB = get_next_item();
			im = get_next_item();

				int imm_value = find_label(im);
				if(imm_value <= 0){
					imm_value = ntoi(im);
				}
			address += output_4fields(SW, reg(rA), reg(rB), imm_value);;
		} else if (!strcmp(word, "bez")) {
			rA = get_next_item();
			im = get_next_item();
					int imm_value = find_label(im);
				if(imm_value <= 0){
					imm_value = ntoi(im);
				}
			address += output_3fields(BEZ, reg(rA), imm_value - address -1);
		} else if (!strcmp(word, "jalr")) {
			rA = get_next_item();
			rB = get_next_item();
			address += output_4fields(JALR, reg(rA), reg(rB), 0);
		} else if (!strcmp(word, "mov")) {
			rA = get_next_item();
			rB = get_next_item();
			address += output_4fields(ADD, reg(rA), reg(rB), 0);
		} else if (!strcmp(word, "movi")) {
			rA = get_next_item();
			im = get_next_item();
				int imm_value;
				if(find_label(im) >= 0){
					imm_value = find_label(im);
				} else{
					imm_value = ntoi(im);
				}
			address += output_4fields(ADDI, reg(rA), 0, 0);
			address += output_imm(im);
		} else if (!strcmp(word, "and")) {
			rA = get_next_item();
			rB = get_next_item();
			rC = get_next_item();
			address += output_4fields(NAND, reg(rA), reg(rB), reg(rC));
			address += output_4fields(NAND, reg(rA), reg(rA), reg(rA));
		} else if (!strcmp(word, "sub")) {
			rA = get_next_item();
			rB = get_next_item();
			rC = get_next_item();
			address += output_4fields(NAND, 10, reg(rC), reg(rC));
			address += output_4fields(ADDI, 10, 10, 1);
			address += output_4fields(ADD, reg(rA), reg(rB), 10);
		} else if (!strcmp(word, "or")) {
			rA = get_next_item();
			rB = get_next_item();
			rC = get_next_item();
			address += output_4fields(NAND, 10, reg(rB), reg(rB));
			address += output_4fields(NAND, 11, reg(rC), reg(rC));
			address += output_4fields(NAND, reg(rA),10, 11);
		} else if (!strcmp(word, ".fill")) {
			im = get_next_item();
			address += output_imm(im);
		} else if (!strcmp(word, "nop")) {
			address += output_imm("0");
		} else if (!strcmp(word, "halt")) {
			address += output_imm(HALT);
		}

	}
	fclose(fp);
}