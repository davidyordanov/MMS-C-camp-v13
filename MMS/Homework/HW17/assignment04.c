#include <stdio.h>
#include <signal.h>
#include <time.h>
#include <unistd.h>

void sigintHandlerOne(int sig_num){

    signal(SIGINT, sigintHandlerOne);
    printf("\n Cannot be terminated using Ctrl+C \n");
    fflush(stdout);
}

void sigintHandlerTwo(int sig_num){

    signal(SIGTSTP, sigintHandlerTwo);
    printf("\n Cannot be terminated using Ctrl+Z \n");
    fflush(stdout);
}
int main (){

    signal(SIGINT, sigintHandlerOne);
    signal(SIGTSTP, sigintHandlerTwo);
    while(1)
    {        
        printf("MMS C Camp\n");
        sleep(1);
    }
    return 0;
}