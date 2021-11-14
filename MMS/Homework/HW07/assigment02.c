#include <stdio.h>

unsigned sumArrayDigits(int* arr, size_t n);

int main(){
    int n = 4;
    int arr[] = {12, 34, 5, 70 };
    printf("%d\n", sumArrayDigits(arr, n));
    return 0;
}

unsigned sumArrayDigits(int* arr, size_t n){
    int num=0;
    int m = 0;
    int sum =0;
    for (int i = 0; i < n; i++){
        num=arr[i];
        while (num!=0){
            m = num%10;
            sum = sum+m;
            num = num/10;
            
        }
    }
    return sum;
    
}
