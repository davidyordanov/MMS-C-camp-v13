#include <stdio.h>
#include <stdint.h>
 
void swapBytes(uint16_t* word){

     *word = ((*word & 0x0F)<<4 | (*word & 0xF0)>>4);

 }

 void bin(unsigned n)
{
    if (n > 1)
        bin(n >> 1);
 
    printf("%d", n & 1);
}


 
int main()
{
    uint16_t x = 100;
    printf("Number in decimal before the swap: %d\n", x);
    printf("Number in binary before the swap: ");
    bin(x);
    printf("\n");
    swapBytes(&x);
    
    printf("Number in binary after the swap: ");
    bin(x);
    printf("\n");
    printf("Number in decimal after the swap: %d\n", x);
    return 0;
}
