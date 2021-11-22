/*

WORKS ONLY WITH CHAR $ 

*/
#include <stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<pthread.h>

int C = 0;
pthread_mutex_t mutex;
void *countSymbols(void *fileNameStr_ ) {
    char *fileNameStr = (char*)fileNameStr_;
    int fd;
    if((fd=open(fileNameStr, O_RDONLY)) == -1) {
        perror("Could not open file\n");
        exit(-1);
    }
    char curSym;
    int C_ = 0;
    while(read(fd, &curSym, 1) > 0) {

        if(curSym == '$') {
           
            C_++;
        }
    }
    pthread_mutex_lock(&mutex);
    C = C + C_; 
    pthread_mutex_unlock(&mutex);
}

int main(int argc, char* argv[]) {
    
    int N = atoi(argv[1]);

    char *fileNames[20];
    
 
    pthread_mutex_init(&mutex, NULL);
    char buf[100];
    for(int i = 0; i < N; i++) {
        scanf("%s", buf);
        fileNames[i] = malloc(sizeof(char)*(strlen(buf) + 1));
        strcpy(fileNames[i], buf);
    }
    pthread_t threadI[20];
    for(int i = 0; i < N; i++) {
        pthread_create(&threadI[i], NULL, countSymbols, fileNames[i]);
    }
    for (int i = 0; i < N; i++){
        pthread_join(threadI[i], NULL);
    }
    printf("%d\n", C);
    return 0;
}