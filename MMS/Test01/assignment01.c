#include <stdio.h>
#include <stdint.h>
#define TINT 1 
#define TCHAR 2
#define TDOUBLE 3
#define TFLOAT 4
#define TUINT8 5
#define TUINT16 6
#define TUINT32 7
#define TUINT64 8

void printValue(const void* valuePtr, uint8_t flag);


int main(void)
{
   int num = 23;
   char ch = 'a';
   float num1 = 3.14;
   double num2 = 3.14689;
   printValue(&num, TINT);
   printValue(&ch, TCHAR);
   printValue(&num1, TFLOAT);
   printValue(&num2, TDOUBLE);
   return 0;
}

void printValue(const void* valuePtr, uint8_t flag)
{
if (flag==TINT)
{
    printf("Value: %d\n", *(const int *)valuePtr);

}
if (flag==TCHAR)
{
    printf("Value: %c\n", *(const char *)valuePtr);

}
if (flag==TDOUBLE)
{
    printf("Value: %lf\n", *(const double *)valuePtr);

}
if (flag==TFLOAT)
{
    printf("Value: %f\n", *(const float *)valuePtr);

}
if (flag==TUINT8)
{
    printf("Value: %u\n", *(const int *)valuePtr);

}
if (flag==TUINT16)
{
    printf("Value: %u\n", *(const int *)valuePtr);

}
if (flag==TUINT32)
{
    printf("Value: %u\n", *(const int *)valuePtr);

}
if (flag==TUINT64)
{
    printf("Value: %u\n", *(const int *)valuePtr);

}

}
