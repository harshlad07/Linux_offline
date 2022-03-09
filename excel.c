#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("Going to execute an 'ls' program\n");
	
	execl("/home/harsh/Desktop/Linux Offline/fork", "fork", "-lh", 0);
	
	printf("executed!!\n");
	printf("executed!!\n");
	printf("executed!!\n");
	
	int ret;
	ret = execl("/usr/bin/vim", "vim", "info1.txt", 0);
	if(ret == -1)
	{
		printf("execl returned error %d\n", ret);
	}
}
