#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if(ref_r->pc != cpu.pc){
  	printf("error pc!\n");
  	return false;
  	}
  for(int i = 0;i<32;i++)
  	if(ref_r->gpr[i] != cpu.gpr[i]){
  		printf("false reg: %d",i);
  		return false;
  		}
  return true;
}

void isa_difftest_attach() {
}
