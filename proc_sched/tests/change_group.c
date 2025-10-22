#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <minix/callnr.h>
#include <lib.h>


int main(int argc, char **argv)
{
	message m;	
	if (argc > 2){
		m.m1_i1 = atoi(argv[1]);
		m.m1_i2 = atoi(argv[2]);
	}
	else{
		printf("Not enough arguments provided\n");
		return 0;
	}
	if (_syscall(MM, 78, &m) == 0){

		printf("Group changed successfully\n");
	}
	else{
		printf("System call failed \n");
	}
	return 0;

}


