#include "lib.h"
#include "unistd.h"

int printmessage(void) {
	message m;
	_syscall(PM_PROC_NR, 69, &m);
	return 0 ;
}