#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 10
#define N 10

typedef struct {
    char model[150];
    u_int8_t maxspeed;
    double price;
} car;

int randomInt(int,int);
double randomReal(double,double);
void bubbleSort(void*,size_t,size_t,int(*)(const void*,const void*));
void swapUni(void*,void*,size_t);
int compareCarModel(const void*, const void*);
int compareCarModelDec(const void*, const void*);
int compareCarMaxSpeed(const void*, const void*);
int compareCarMaxSpeedDec(const void*, const void*);
int compareCarPrice(const void*, const void*);
int compareCarPriceDec(const void*, const void*);
int (*getComparator(int n))(const void*, const void*);

int main(void){

    srand(time(NULL));
    car cars[COUNT];
    for (int i = 0; i < COUNT; i++){
        cars[i].model[0] = randomInt('A', 'Z');
        
        for (int k = 1; k < N; k++){
            cars[i].model[k] = randomInt('a', 'z');
        
        }
        cars[i].model[N-1] = '\0';
        cars[i].maxspeed = randomInt(100, 300);
        cars[i].price = randomReal(1000.0, 100000.00);
    }

   int n=0;
   printf("To sort the array, please enter a value: 1-6\n");
   scanf("%d",&n);
  
   qsort(cars, COUNT, sizeof(car), getComparator(n));
  
    for (int i = 0; i < COUNT; i++){
        printf("Car Model: %s, ", cars[i].model);
        printf("Max Speed: %d, ", cars[i].maxspeed);
        printf("Price: %0.2lf\n ", cars[i].price);
    }
    
    return 0;
}

int compareCarModel(const void* a, const void* b){
    return strcmp(((car*)a)->model, ((car*)b)->model);
}
int compareCarModelDec(const void* a, const void* b){
    return strcmp(((car*)b)->model, ((car*)a)->model);
}
int compareCarMaxSpeed(const void* a, const void* b){
    return ((car*)a)->maxspeed - ((car*)b)->maxspeed;
}
int compareCarMaxSpeedDec(const void* a, const void* b){
    return ((car*)b)->maxspeed - ((car*)a)->maxspeed;
}
int compareCarPrice(const void* a, const void* b){
    return ((car*)a)->price - ((car*)b)->price;
}
int compareCarPriceDec(const void* a, const void* b){
    return ((car*)b)->price - ((car*)a)->price;
}
int (*getComparator(int n))(const void* a, const void* b){
    if(n==1) return compareCarModel;
    if(n==2) return compareCarModelDec;
    if(n==3) return compareCarMaxSpeed;
    if(n==4) return compareCarMaxSpeedDec;
    if(n==5) return compareCarPrice;
    if(n==6) return compareCarPriceDec;

}

int randomInt(int min, int max){
    return min + rand() % (max - min + 1);
}

double randomReal(double min, double max){
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

void swapUni(void* a, void *b, size_t size){
    char temp[size];
    memmove(temp, a, size);
    memmove(a, b, size);
    memmove(b, temp, size);
}

