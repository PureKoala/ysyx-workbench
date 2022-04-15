build:
	verilator --cc --trace --exe --build csrc/sim_main.cpp vsrc/top.v

sim: build
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	./obj_dir/Vtop
	./waveform.vcd

clean:
	rm -rf obj_dir/

include ../Makefile
