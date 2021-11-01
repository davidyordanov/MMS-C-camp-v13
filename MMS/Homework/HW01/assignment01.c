#include <stdio.h>
#include <math.h>

int main(){

double weight, height;
printf("Please enter your weight:");
scanf("%lf", &weight);
printf("Please enter your height:");
scanf("%lf", &height);
double oldFormulaBMI = weight/(height*height);
double newFormulaBMI = 1.3 * (weight/(pow(height, 2.5)));
printf("Traditional BMI: %lf\n", oldFormulaBMI);
printf("New BMI: %lf\n", newFormulaBMI);
return 0;

}