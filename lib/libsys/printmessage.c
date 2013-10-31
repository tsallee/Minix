#include "lib.h"
#include "unistd.h"
#include "syslib.h"

int printmessage(void) {
	message m;
	_syscall(PM, 69, &m);
	return(0);
}