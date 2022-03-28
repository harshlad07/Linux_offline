#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>
#include<sys/mman.h>


static void* tf(void *arg)
{
	char *s = (char *)arg;
	printf("%s\n", s);
	sleep(5);
	return (void*)strlen(s);
}
int main()
{
	pthread_t t1;
	void *r;
	int s;
	
	pthread_create(&t1,NULL, tf, "hello world f off\n");
	
	printf("msg from main()");
	
	pthread_join(t1,&r);
	printf("Thread return %ld\n", (long) r);
	//exit(0);
	return 0;
}
