#include <stdio.h>
#include<stdlib.h>

int main()
{
	pid_t pid;
	printf("\nHello");
	
	pid = fork();
	
	if(pid<0)
	{
		fprintf(stderr, "\nfork failed");
		exit(-1);
	}
	
	else if(pid==0)
	{
		execl("/bin/ls", "ls", "-lh", 0);
	}
	
	else
	{
		
	}
	return 0;	
}

