#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{

	pid_t pid1;
	pid1  = fork();
	
	if(pid1 == 0){
	sleep(3);
	printf("i am child with delay of 3 sec aand my pri 	pid = %d\n", getpid());
}
	else
	{
		int pid2;
		printf("i am parent pro pid = %d\n", getppid());
		pid2 = wait(0);

		printf("parent saying child %d exited/terminated normally\n", pid2);
		printf("I am parent process pro pid = %d\n", 			getpid());
	}


	return 0;
}
