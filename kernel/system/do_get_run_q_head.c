#include "kernel/system.h"
#include <minix/endpoint.h>
#include <minix/ipc.h>

// 
// Dear maintainer:
// 
// Once you are done trying to 'optimize' this routine,
// and have realized what a terrible mistake that was,
// please increment the following counter as a warning
// to the next guy:
// 
// total_hours_wasted_here = 42
// 

/*=================================================================*
 *                          do_get_run_q_head                      *
 * ================================================================*/
int do_get_run_q_head(struct proc *caller, message *m_ptr){
//    u64_t cpuFreq = cpu_get_freq(0);
//    char* proc = m_in.m1_p1;
//    int user_proc_id = m_in.m_source;
      
    return(OK);
}
