#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int g = 0;


void *myThreadFun(void *vargp){
	int *myid = (int *)vargp;
	static int s = 0;
	++s; ++g;
	printf("Thread ID: %d, Static: %d, Global: %d\n", *myid, ++s, ++g);
    printf("10 random char message\n");
}

int main(){
	int N;
	pthread_t tid;
    printf("Enter number of threads to be created: ");
    scanf("%d",&N);

	for (int i = 0; i < N; i++)
		pthread_create(&tid, NULL, myThreadFun, (void *)&tid);

	pthread_exit(NULL);
	return 0;
}
