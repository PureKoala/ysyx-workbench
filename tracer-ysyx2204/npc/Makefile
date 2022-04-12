all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --assert --coverage --build -j -cc ./vsrc/*.v --trace --exe ./csrc/*.cpp
	make -j -C ./obj_dir -f VTop.mk Vtop

include ../Makefile
