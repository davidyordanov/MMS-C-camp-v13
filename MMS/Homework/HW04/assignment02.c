#include <stdio.h>



int main(void)
{
   int n;
   scanf("%d",&n);
   for (size_t i = 0; i < n; i++)
   {   
   for (size_t i = 0; i < n; i++)
   {
      printf("*");
   }
   printf("\n");
   }
   for (size_t i = 0; i < n; i++)
   {   
   for (size_t j =0; j <=i; j++)
   {
      printf("$");
   }
   printf("\n");
   }
   for (size_t i = 0; i < n; i++)
   {   
      if (i==0||i==n-1)
      {
          printf("+");
      for (size_t k = 0; k <n-2; k++)
      {
         printf("-");
      }
      printf("+");
      
   printf("\n");
      }
      else {
       printf("|");
      for (size_t k = 0; k <n-2; k++)
      {
         printf("-");
      }
      printf("|");
      
   printf("\n");
      }
     
   }

}

