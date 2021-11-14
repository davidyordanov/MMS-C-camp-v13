#include <stdio.h>

void arrayEvaluate(int* arr, size_t n, int(*f)(int*,int));
int sum(int* arr, int);


int main(){

int arr[] = {1, 2, 3};
arrayEvaluate(arr, 3, sum);
 
    return 0;
}

void arrayEvaluate(int* arr, size_t n, int(*sum)(int*,int)){
    
    printf("Value: %d\n", sum(arr,n));
    
}
int sum(int* arr, int n){
   int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];    
    }
    return sum;
}