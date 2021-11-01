#include <stdio.h>
//int, char, double, float, uint8_t, uint16_t, uint32_t, uint64_t.
#define TINT1


void printValue(const void* valuePtr, uint8_t flag);


int main(void)
{
   int num = 23;
   printValue(&num, ТINT);

}

void printValue(const void* valuePtr, uint8_t flag)
{
if (TINT1)
{
    printf("Value: %d", valuePtr);
}

}
