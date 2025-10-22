/*program tworzacy ilosc dzieci podana jako argument wywolania lub domyslnie 10*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

#define CHILDREN (10)
int main(int argc, char *argv[]) {
    unsigned i;
    int childr;
    printf("pid: %d\n", getpid());
    if (argc == 1){
   	childr = CHILDREN;
    }
    else{
    	childr = atoi(argv[1]);
    }		
    printf("children: %d\n", childr);
    for (i = 0; i < childr; i++) {
        if (fork() == 0) {
      		return 0;
        }
    }
    sleep(1);
    return 0;
}

