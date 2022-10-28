#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>

int main(void)
{
    int pid;
    pid=fork(); 
    if (pid==0) {
    
	    	execl("/usr/bin/xterm", "xterm", "./f", NULL);

    
    }

    wait(NULL);
    exit(0);

}
