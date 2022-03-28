#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>


void *my(void *i)
{
	printf("\n i am in %d thread\n", (int *)i);
}


int main(){
	
/*	pthread_t tid;*/
	
	struct sched_param param;
	
	int priority, policy, ret;
	
	ret = pthread_getschedparam(pthread_self(), &policy, &param);
	
	printf("\n-------------main thread------------\n policy : %d \n priority : %d\n", policy, param.sched_priority);
	
	policy = SCHED_FIFO;
	param.sched_priority = 3;
	pthread_setschedparam(pthread_self(), policy, &param);
	
	pthread_getschedparam(pthread_self(), &policy, &param);
	
	printf("\n-------------main thread------------\n policy : %d \n priority : %d\n", policy, param.sched_priority);
	
return 0;
}
