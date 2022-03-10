#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	printf("\nHello");
	execl("/bin/ls", "ls", "-lh", 0);
	
	printf("\nHello");
	printf("\nHello");
	printf("\nHello");
	return 0;
}

