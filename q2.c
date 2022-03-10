#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>

int main()
{
	printf("\nCan you see me [ONE]\n");
	execl("/home/harsh/Desktop/Linux_Offline/execltest", "./execltest" ,"linux", "kernel", "lad", 0);
	
	return 0;
}

