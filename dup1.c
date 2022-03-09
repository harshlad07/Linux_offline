#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd1, fd2, fd3, fd4, fd5;
	
	fd1=open("linux.txt", O_WRONLY|O_CREAT|O_TRUNC, 077);
	fd2=open("linuxnew.txt", O_WRONLY|O_CREAT|O_TRUNC, 077);
	//fd2=open("linuxnew.txt", O_WRONLY|O_CREAT|O_TRUNC, 077);
	
	printf("fd1=%d\n", fd1);
	printf("fd2=%d\n", fd2);
	
	fd3=dup(fd1);
	
	printf("fd3_dup of fd1=%d\n", fd3);
	
	fd4=dup(fd2);
	
	printf("fd4_dup of fd2=%d\n", fd4);
	
	fd5=dup2(fd1,444);
	
	printf("fd5 %d\n", fd5);
	
	close(fd5);
	close(fd4);
	close(fd3);
	close(fd2);
	close(fd1);
}
