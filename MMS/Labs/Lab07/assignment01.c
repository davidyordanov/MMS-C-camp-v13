#include <stdio.h>

int myStrlen(char *str){
    int n =0;
    while (str[n]!='\0'){
        n++;
    }
    return n;
}

int main(){
    char input[100];
    scanf("%s", input);
    printf("%d\n%s", myStrlen(input), input);

 
    return 0;
}