#include <stdio.h>
#include <stdlib.h>


int main(void)
{
 
int N;
scanf("%d", &N);

int res = 1<<(((N+1)>>1)-1);
printf("%d", res);

}



