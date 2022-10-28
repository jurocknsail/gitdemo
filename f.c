#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>

int main(void)
{
	printf("HEY !\n");
	sleep(10);
	exit(1);
}
