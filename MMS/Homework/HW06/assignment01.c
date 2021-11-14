#include <stdio.h>

double mySqrt(double num){

double x = num;
double y = 1;
double e = 0.000001;
while (x-y>e){
    x = (x+y)/2;
    y = num/x;
}
return x;
    
}

int main(){
    double num;
    scanf("%lf",&num);
    printf("The square root of %0.2lf is %lf\n",num,mySqrt(num));

    return 0;
}
