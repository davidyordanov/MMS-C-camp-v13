#include <stdio.h>
#include <stdint.h>

void Reverse(char* ptr);

int main(){

    char ptr[100] = "This is a test\0";
    printf("Enter a string: %s\\0\n", ptr);

    Reverse(ptr);

    printf("Reverse of the string: %s\\0\n", ptr);
  
    return 0;
}

void Reverse(char* ptr){
    int i, lenght;
    char *beginPtr, *endPtr, ch;
    for (i = 0; i <= ptr[i]!='\0'; ++i);
    lenght = i;
    beginPtr = ptr;
    endPtr = ptr;

    for (i = 0; i < lenght-1; i++){
        endPtr++;
    }
    
    for (i = 0; i < lenght / 2; i++){
        ch = *endPtr;
        *endPtr = *beginPtr;
        *beginPtr = ch;
        beginPtr++;
        endPtr--;
    }
}
