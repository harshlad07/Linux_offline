#include <stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>

int main()
{
	pid_t pid;
	int option, stat;
	printf("\nHello");
	
	while(1)
	{
		printf("\nEneter the exdc 'ls' program in child process abd 0 to exit - ");
		scanf("%d", &option);
		
		if(!option)
		{
			exit(0);
		}
		printf("\n");
		
		if(fork()==0)
		{
			execl("/bin/ls", "ls", 0);
			exit(0);
		}
	}
	return 0;	
}

