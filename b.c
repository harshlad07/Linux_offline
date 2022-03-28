#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>
#include<sys/mman.h>

void *foo(void *arg)
{
	pthread_cond_t cond1 = PTHREAD_COND_INITIALIZER;
	
	pthread_cond_t lock = PTHREAD_MUTEX_INITIALIZER;
	
	int d=1;
	char *s=(char *)arg;
	
	printf("\nThread task called = %s\n", s);
	
	pthread_mutex_lock(&lock);
	
	if(d==1)
	{
		d=2;
		printf("\nwaiting...");
		pthread_cond_wait(&cond1,&lock);
	}
	else
	{
		printf("\nSignaling cond ");
		pthread_cond_signal(&cond1);
	}
	
	pthread_mutex_unlock(&lock);
	
	printf("\nReturn");
	
	return NULL;
}

int main()
{
	pthread_t td1,td2;
	
	pthread_create(&td1, NULL, foo, "tbone");
	
	sleep(1);
	
	//done=2;
	
	pthread_create(&td2,NULL,foo,"tbone2");
	
	pthread_join(td2,NULL);
	return 0;
}
