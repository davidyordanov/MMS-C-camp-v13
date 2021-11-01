#include <stdio.h>
#include<stdarg.h> 

size_t bitsNCount(size_t count, size_t bitscnt, ...);

int main()
{
bitsNCount(4, 2, 0x0a, 0xff, 0, 1);
bitsNCount(3, 8, 0xff, 0x13f1, 0xaaaa);
bitsNCount(5, 10, 0x0a, 0xa0ff, 0, 10, 0b1010111110111);


   return 0;
}

size_t bitsNCount(size_t count, size_t bitscnt, ...)
{   
    int returnBitCalc=0;
    va_list ptr;
    va_start(ptr, bitscnt);
    
    for (int i = 0; i < count; i++) {
        int temp = va_arg(ptr, int);
        int countBit=0;
        while (temp) {
        countBit += temp & 1;
        temp >>= 1;
    }
    if(countBit==bitscnt)
    {
        returnBitCalc++;
    }
  
     va_end(ptr);
    }
      printf("%d\n", returnBitCalc);
}

