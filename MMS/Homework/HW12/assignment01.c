#include <stdio.h>
#include <stdint.h>

unsigned char CheckBit(unsigned int uValue){
    if (uValue && !(uValue &(uValue-1))){
        return 0x01;
    }
    else{
        return 0x00;
    }
    
}

int main()
{

    unsigned int bits0 = 0x0400;
    unsigned int bits1 = 0x0600;
    unsigned int bits2 = 0x0000;
    printf("Input = %u \n",bits0);
    printf("Output = %u \n", CheckBit(bits0));

    printf("Input = %u \n",bits1);
    printf("Output = %u \n", CheckBit(bits1));

    printf("Input = %u \n",bits2);
    printf("Output = %u \n", CheckBit(bits2));
    

	return 0;	
}
