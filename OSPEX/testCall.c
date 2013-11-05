#include <printmessage.h>
#include <obtain_proctable.h>
#include <stdio.h>
int main(int argc, char** args) {
	int a = printmessage();
	struct pi p;
	int b = obtain_proctable((char*) &p);

	return 0;
}