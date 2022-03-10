#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


void cb1() //callback function
{
	printf("\ncb1 called");
}


void cb2()
{
	printf("\ncb2 called");
}

void cb3()
{
	printf("\ncb3 called\n");
}

int main()
{
	printf("registering cb\n");
	atexit(cb1);
	printf("\nHello");
	atexit(cb2);
	printf("\nHello");
	atexit(cb3);
	
	exit(0);
	//return 0;	
}

