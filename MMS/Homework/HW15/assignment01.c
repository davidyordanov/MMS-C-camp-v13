#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define COUNT 10
#define N 20

typedef struct {
    char title[150];
    char autor[100];
    double price;
    int pages;
} book;

int randomInt(int,int);
double randomReal(double,double);

int main(int argc, char* argv[]){

    srand(time(NULL));
    book books[COUNT];
    for (int i = 0; i < COUNT; i++){
        books[i].title[0] = randomInt('A', 'Z');
        books[i].autor[0] = randomInt('A', 'Z');
       
        for (int k=1; k < N; k++){
            books[i].title[k] = randomInt('a', 'z');
            books[i].autor[k] = randomInt('a', 'z');
        }
        books[i].title[N-1] = '\0';
        books[i].autor[N-1] = '\0';
        books[i].pages = randomInt(5, 2000);
        books[i].price = randomReal(-1.0, 1000.0);
    }
    
    for (int i = 0; i < COUNT; i++){
        printf("Title: %s, ", books[i].title);
        printf("Autor: %s, ", books[i].autor);
        printf("Pages: %4d, ", books[i].pages);
        printf("Price: %3.2lf lv\n", books[i].price);
    }

    FILE *outfile;
     
    outfile = fopen (argv[1], "wb");
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opened file\n");
        exit (1);
    }

    for (int i = 0; i < COUNT; i++){
        fprintf(outfile,"Title: %s, ", books[i].title);
        fprintf(outfile,"Autor: %s, ", books[i].autor);
        fprintf(outfile,"Pages: %4d, ", books[i].pages);
        fprintf(outfile,"Price: %3.2lf lv\n", books[i].price);
    }
     
    if(fprintf != 0){
        printf("Contents to file written successfully !\n");
    }
    else{
        printf("Error writing file !\n");
    }
 
    fclose (outfile);
    return 0;
}



int randomInt(int min, int max){
    return min + rand() % (max - min + 1);
}

double randomReal(double min, double max){
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

