#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
 
int main () {
 
   {
    /* fork() returns process id of the parent process*/ 
    int pid = fork();
    if(pid<0){
        exit(1);
    }
    /* Parent process  and child process,
    the child finishes its execution using exit() system
    call while the parent sleeps for 50 seconds, hence doesn’t call wait() 
    and the child process’s entry still exists in the process table.*/
    if (pid > 0){
        printf("parent pid: %d\n", getpid());
        sleep(10);
    }
    else{
        printf("child pid: %d\n", getpid());      
        exit(0);
    }

}
   system("ps -l");
   sleep(3);
   system("kill -9 $(ps -l|grep -w Z|tr -s ' '|cut -d ' ' -f 5)");
   sleep(7);
   printf("\n\nupdated list of processes with their states\n\n");
   system("ps -l");
   return(0);
} 