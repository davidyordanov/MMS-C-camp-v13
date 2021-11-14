#include <stdio.h>
#define MAX(x,y,z) ((x>z&&x>y) ? x : (y>z) ? y : z)
#define MIN(x,y,z) ((x<z&&x<y) ? x : (y<z) ? y : z)
#define SETBIT(mask, bit) ((mask | (1<<bit)))
#define INVERSEBIT(mask, bit) (mask ^ (1<<bit))
#define CHECKBIT(mask, bit) (mask & (1<<bit)) ? 1 : 0
#define SWAPXOR(a,b) (a^=b ^=a^=b)
#define SWAP(a,b,temp) temp = a; a=b; b=temp;


int main(void)
{
  int x,y,z, bitNum;  
    printf("Enter 3 integer numbers\n");  
    scanf("%d%d%d%d", &x, &y, &z, &bitNum);  
  
    printf("Biggest of 3 the numbers is %d\n", MAX(x, y, z)); 
    printf("Smallest of 3 the numbers is %d\n", MIN(x, y, z)); 
    printf("TESTBIT Macro %3d\n", SETBIT(bitNum, 1)); 
    printf("TESTBIT Macro %3d\n", INVERSEBIT(bitNum, 1)); 
    printf("TESTBIT Macro %3d\n", CHECKBIT(bitNum, 1)); 
    SWAP(x,y,z);
    printf("TESTBIT Macro %d, %d\n", x,y); 
  
    return 0;  
}



