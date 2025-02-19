#!/usr/bin/perl

while (<>) {
	if ($_ =~ /EC362M/) {
		open FP, "init.dat";
		while(<FP>) {
			chomp;
			print "X\"",$_,"\",\n";
		}
		close FP;
	} elsif ($_ =~ /EC362P/) {
		open FP, "print.vhdl";
		while(<FP>) {
			print;
		}
		close FP;
	} else {
		print $_;
	}
}
