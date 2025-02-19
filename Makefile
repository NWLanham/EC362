######################################################################
#
# DESCRIPTION: Verilator Example: Small Makefile
#
# This calls the object directory makefile.  That allows the objects to
# be placed in the "current directory" which simplifies the Makefile.
#
# This file ONLY is placed under the Creative Commons Public Domain, for
# any use, without warranty, 2020 by Wilson Snyder.
# SPDX-License-Identifier: CC0-1.0
#
######################################################################
# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################

# This is intended to be a minimal example.  Before copying this to start a
# real project, it is better to start with a more complete example,
# e.g. examples/make_tracing_c.

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package install, and verilator is in your path. Otherwise find the
# binary relative to $VERILATOR_ROOT (such as when inside the git sources).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

default:
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) -cc --exe --build -j top.v sim_main.cpp
	@echo "-- RUN ---------------------"
	obj_dir/Vtop
	@echo "-- DONE --------------------"

as:	as.c
	cc -o as as.c

as-tests:	as
	for i in add addi addil nand lw sw bez jalr fill nop mov movi and sub or big1 big2 ; do echo $$i ; ./as benchmarks/$$i.s > out ; diff out benchmarks/$$i.exe ; rm out ; echo $$i-run ; ./as benchmarks/$$i-run.s > out ; diff out benchmarks/$$i-run.exe ; rm out ; done

mp-tests:	risc16.v
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) -cc --exe --build -j top.v sim_main.cpp
	@echo "-- RUN ---------------------"
	for i in add addi addil nand lw sw bez jalr fill nop mov movi and sub or big1 big2 ; do echo $$i ; cp benchmarks/$$i-run.exe ./init.dat ; make | grep -vi veril | grep -v make > out ; diff out benchmarks/$$i-run.out ; rm init.dat out ; done
	@echo "-- DONE --------------------"

######################################################################

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir *.log *.dmp *.vpd core
