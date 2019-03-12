#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t mutex;
int a = 0;

void* theThread(void* arg) 
{
	sem_wait(&mutex);
	printf("Entered\n");
	printf("%d\n", a+=5);

	printf("Exiting\n");
	sem_post(&mutex);
}

int main(int argc, char const *argv[])
{
	sem_init(&mutex, 0, 1);
	printf("%li", sizeof(int));
	pthread_t t1, t2;
	pthread_create(&t1, NULL, theThread, NULL);
	
	pthread_create(&t2, NULL, theThread, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	sem_destroy(&mutex);
	return 0;
}
