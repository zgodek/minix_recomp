/*program tworzacy sciezke procesow o dlugosci podanej jako argument wywolania lub domyslnie 5*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#define MAX_GENERATIONS (5)

int main(int argc, char* argv[]) {
  int max_generations = MAX_GENERATIONS;
  pid_t pid = 0;
  size_t g;
  if (argc > 1) {
    max_generations = atoi(argv[1]);
  }
  for (g = 0; g < max_generations; ++g) {
    pid = fork();
    if (pid == -1) {
        printf("fork() failed\n");
        return -1;
    }
    else if (pid == 0){
      printf("Hello world. I am the new child.\n");
    }
    else{
        printf("Successfully created child carrying PID %d.\n", (int) pid);
        break;
    }
  }

  sleep(20); 

  if (0 != pid) {
    if (-1 == wait(NULL)) {
      printf("wait() failed\n");
    }
  }

  printf("Child ended, terminating as well.\n");

  return EXIT_SUCCESS;
}
