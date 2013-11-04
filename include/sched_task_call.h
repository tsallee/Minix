#include <sys/cdefs.h>
#include <lib.h>

#include <unistd.h>

static inline int sched_task_call() {
	message m;
  	return(_task_call(SCHED_PROC_NR, SCHED_TASK_CALL, &m));
}