#include<stdio.h>
#include "atomic.h"
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>
#include<sys/mman.h>



int main()
{
	atomic_t v; // define v
	atomic_t u = ATOMIC_INIT(0); // define u and initialize it to zero
	
	atomic_set(&v, 4);
	printf("%d\n", atomic_read(&v));
	
	atomic_add(2,&v);
	printf("%d\n", atomic_read(&v));
	
	atomic_inc(&v);
	printf("%d\n", atomic_read(&v));
	
	atomic_sub(1, &v);
	printf("%d\n", atomic_read(&v));
	
	atomic_dec(&v);
	printf("%d\n", atomic_read(&v));
	return 0;
}
