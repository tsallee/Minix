#include <sys/cdefs.h>
#include <lib.h>
#include "syslib.h"
#include <unistd.h>

static inline int sched_task_call() {
	message m;
  	return(_taskcall(SCHED_PROC_NR, SCHED_TASK_CALL, &m));
}