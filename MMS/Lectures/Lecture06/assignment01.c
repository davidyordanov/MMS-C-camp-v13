#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE(array) (sizeof(array)/sizeof(array[0]))

int sumArray(int* arr, int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum+=i[arr];
    }
    return sum;
    
    
}

int maxElement(int* arr, int n){

int max=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (max<i[arr])
        {
            max=i[arr];
        }
        
       
    }
    return max;

}
int minElement(int* arr, int n){

//int min= arr[0];

int min= __INT_MAX__;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (min>i[arr])
        {
            min=i[arr];
        }

        // min = (min>arr[i] ? arr[i] : min)
        
       
    }
    return min;    
    
}
int averageElement(int* arr, int n){

    int sum;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum+=i[arr];
    }
    return sum/n;
    

}

int main(void)
{
  srand(time(NULL));
  int numbers[50];
  double realNumbers[100];
  printf("Size of numbers: %lu\n", sizeof(numbers)/sizeof(int));
  printf("Size of  real numbers: %lu\n", sizeof(realNumbers)/sizeof(double));
  for (int i = 0; i < 10; i++)
  {
      /* code */
      numbers[i]=rand()%10;
  }
  
  
  for (int i = 0; i < 10; i++)
  {
      /* code */
      printf("%d ", numbers[i]);
    
  }  

  printf("%d\n", *numbers); //gives us the first element

  printf("%d\n", *(numbers+3)); //gives us
    
  int n =3;
  printf("Num = %d\n", numbers[n]); //gives us  
  printf("Num = %d\n", n[numbers]); //gives us  
  //printf("Sum = %ld\n",sumArray(10,10)); //gives us  
  putchar('\n');

  printf("Max num= %d\n", maxElement(numbers, 10));
  printf("Min num= %d\n", minElement(numbers, 10));
  printf("Avr num= %d\n", averageElement(numbers, 10));



    return 0;  
}



