#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <minix/callnr.h>
#include <lib.h>


int main(int argc, char **argv)
{
	message m;	
	if (argc > 1){
		m.m1_i1 = atoi(argv[1]);
	}
	else{
		m.m1_i1 = -1;
	}
	if (_syscall(MM, 79, &m) == 0){

		printf("pid of process with the longest path: %d, length of the path: %d\n", m.m1_i1, m.m1_i2);
	}
	else{
		printf("System call failed \n");
	}
	return 0;

}


