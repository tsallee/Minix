#include "syslib.h"

int sys_getrunqhead(unsigned flags, endpoint_t proc_ep)
{
        message m;
	m.m1_p1 = proc_ep;

        return(_kernel_call(SYS_GETRUNQHEAD, &m));
}
