#include "ospex.h"
#include "glo.h"
#include "sched.h"

void OSSendPtab(void) {

		printf("Count:%d", call_count);
		printf("\n");

		struct proc processes[ALL_PROCS];

		// After this call, processes holds the process table
		sys_getproctab(&processes);

		/* Replace struct pi pInfo[i][] = NULL with process table information from the scheduler*/
		process_info[call_count] = processes;
}
