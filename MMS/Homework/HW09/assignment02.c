#include <stdio.h>

int recArray(int array[], int position, int exit, int size);


int main(void) {

    //int data[] = {5,23,77,123,681,9,772,16};
    int data[] = {73,14,90,28,11,63,81,52};
   // int position = 4;
   int position = 0;
    int exit=0;
      int size = sizeof(data) / sizeof(data[0]);
    // printf("positionCheck: %d \n",size);
    printf("%d \n",recArray(data,position,exit,size));
    //printArray(data,n);
 

  return 0;
}

int recArray(int array[], int position, int exit, int size){
    int n = array[position];
    printf("Number = %d(%d)  \n",n,position);
    int m, sum = 0;
       int arrayTwo[size];
    for (int i = position; i <= position; i++)
    {
        arrayTwo[i] = position;
        printf("Adding to array %d \n",position);

    }
    while (n!=0){
        m= n % 10;
        sum+=m;
        n=n/10;
    }
    if (sum%2==0){
        position = position +3;
        //printf("Number = %d  \n",position);
    }
    else{
        position = position -2;
       // printf("Position =  %d \n",position);
    }
 
    if(arrayTwo[position] == position){
        printf("Stuck\n");
         return exit;
    }
    exit++;
    
    printf("%d \n",exit);

    //int positionCheck = sizeof(*array) / sizeof(array[0]);
     //printf("positionCheck: %d \n",positionCheck);

    if (position < 0 || position >= size){
    }
    else{
        recArray(array, position, exit, size);
    }
    

    //return exit;

}
