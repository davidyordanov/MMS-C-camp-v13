#include <stdio.h>
#include <math.h>

int triangleCalc(unsigned a, unsigned b, unsigned c, double* area, double* perimeter);

int main(void)
{
  unsigned a,b,c;  
  double area; double perimeter;
    printf("Enter a, b, c: \n");  
    scanf("%u%u%u", &a, &b, &c);  
  triangleCalc(a,b,c,&area, &perimeter);
  printf("Triangle area: %lf, Triangle perimiter: %lf\n",  area,perimeter); 
  
    return 0;  
}

int triangleCalc(unsigned a, unsigned b, unsigned c, double* area, double* perimeter){
    if (a+b>c&&a+c>b&&b+c>a)
    {
        *perimeter=a+b+c;
        double semiArea = (a+b+c)/2;
        *area = sqrt((semiArea*(semiArea-a)*(semiArea-b)*(semiArea-c)));

        return 0;
    }
    else{
        *area=0;
        *perimeter=0;
        return -1;
    }
    
}


