#include <stdio.h>
#include <stdlib.h>

int getBit(int N, int bitI){
    return (N & (1<<bitI))>0;
}

int main(void)
{
      printf("%d\n",getBit(15,2));
      printf("%d\n",getBit(16,2));
            return 0;
int N;
scanf("%d", &N);
int begin = 1<<(N-1), end = 1 <<N, palinDromC = 0;

for (int i = begin; i < end; i++)
{
    /* code */
   // if (palinDrome)

    if (0)
    {
        palinDromC++;
        /* code */
    }
    
}
printf("%d",palinDromC);
return 0;




}



