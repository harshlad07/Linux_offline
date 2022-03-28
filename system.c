#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>
#include<sys/mman.h>

int main()
{
	char buff_comm[5];
	strcpy(buff_comm, "ls -l");
	
	printf("\nSystem() library function uses fork() to create a child process\n");
	
	printf("\nProcess executes excel which loads and run enw prg provided by systerm() argument\n\n");
	
	int i;
	i =system(NULL);
	
	printf("\n\tSystem return value - %d\n\n", i);
	return 0;
}
