#include <printmessage.h>
#include <obtain_proctable.h>
#include <sched_task_call.h>
#include <stdio.h>
int main(int argc, char** args) {
	int a = printmessage();
	int b = obtain_proctable();
	int c = sched_task_call();
	return 0;
}