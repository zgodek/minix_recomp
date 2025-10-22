#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <minix/callnr.h>
#include <lib.h>



int main(int argc, char **argv)
{
	message m;	
	int return_val = _syscall(MM, 78, &m);
	int max_pid = m.m1_i1;
       	int max_children = m.m1_i2;	
	if (return_val == 0){
		printf("pid of process that has the most children: %d, the ammount of children: %d\n", max_pid, max_children);
	}
	else{
		printf("System call failed%d\n", return_val);
	}
	return 0;

}


