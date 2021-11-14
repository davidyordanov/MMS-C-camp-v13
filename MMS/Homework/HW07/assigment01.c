#include <stdio.h>

int secondMax(int* arr, size_t n, int* secondMax);

int main(){
    int n = 4;
    int arrayNum[] = {12, 34, 5, 70, 46};
    int sm=0;
    secondMax(arrayNum, n, &sm);
    printf("%d\n", sm);

    int n1 = 0;
    int arrayNum1[] = {};
    int sm1=0;
    secondMax(arrayNum1, n1, &sm1);
    printf("%d\n", sm1);

    int n2 = 1;
    int arrayNum2[] = {2};
    int sm2=0;
    secondMax(arrayNum2, n2, &sm2);
    printf("%d\n", sm2);
    
    int n3 = 3;
    int arrayNum3[] = {2,2,2,2};
    int sm3=0;
    secondMax(arrayNum3, n3, &sm3);
    printf("%d\n", sm3);
    return 0;
}
int secondMax(int* arr, size_t n, int* secondMax){
    
    int max = arr[0];
    int sum=0;
    for (int i = 0; i <= n; i++){
        if (arr[i]>max)
        {
            *secondMax = max;
            max = arr[i];
        }
        else if (arr[i]<max&&arr[i]>*secondMax){
            *secondMax=arr[i];
        }
        sum+=arr[i];    
    }
        if (n==0)
        {
            printf("Array is empty\n");
            *secondMax=0;
        }
        else if (n==1)
        {
            printf("Array only has one element\n");
            *secondMax=0;
        }
        else if (sum/(n+1)==max)
        {
            printf("All elements are equal\n");
            *secondMax=0;
        }
}