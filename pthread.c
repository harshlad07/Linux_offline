#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>
//#include<pthread.h>
#include<sys/mman.h>

struct mt
{
	int t_id;
	char mesg[100];
};

void *ph(void *tobj)
{
	pthread_t t_ID;
	struct mt *t1;
	
	t1=(struct mt *)tobj;
	t_ID=pthread_self();
	
	printf("\nThread ID %u", t_ID);
	printf("\nThread msg %s\n", t1->t_id,t1->mesg);
}

int main()
{
	pthread_t t2,t3,t4,t_ID;
	int rc;
	struct mt mt2,mt3,mt4;
	mt4.t_id=4;
	strcpy(mt4.mesg, "I'm 4th");
	mt2.t_id=2;
	strcpy(mt2.mesg, "I'm 2nd");
	mt3.t_id=3;
	strcpy(mt3.mesg, "I'm 3rd");
	
	t_ID = pthread_self();
	printf("\nMAIN Thread ID %u", t_ID);
	
	pthread_create(&t4,NULL,ph,(void *)&mt4);
	pthread_create(&t2,NULL,ph,(void *)&mt2);
	pthread_create(&t3,NULL,ph,(void *)&mt3);
	
	printf("\nExit main thread");
	pthread_exit(NULL);
	
	return 0;
}
