#include<unistd.h>
#include<stdio.h>

int main()
{
	int pid_1;
	printf("\nCurrent process PID = %d\n", getpid());
	
	pid_1 = fork();
	
	if(pid_1 == 0)
	{
		printf("new child pid = %d", getpid());
		printf("new child parent process pid = %d", getppid());	
	}
	else
	{
		printf("new parent pid = %d", getpid());
		printf("new parent process pid = %d", getppid());
		
		//fork();	
	}
	while(1);
	
	return 0;
}
