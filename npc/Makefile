all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -cc ./vsrc/*.v --trace --exe ./csrc/*.cpp
	make -j -C ./obj_dir -f Vtop.mk Vtop

include ../Makefile
