#include <stdio.h>
#include <inttypes.h>
#define RW 1

typedef struct {
    char title[100];
    char author[100];
    int pages;
    double price;
 } book_t;


int main(){
    FILE* fp = fopen("binary.dat", "wb");
    book_t books[2] = { { .author="aleko", .pages=200, .title="bai ganio", .price=55.20},
    { .author="aleko", .pages=200, .title="bai ganio", .price=55.20},
};
    fwrite(books,sizeof(book_t),1,fp);
   // printf("%lu\n",arr);
    fclose(fp);
return 0;
}




    /*
    #if RW ==1
    FILE *fp = fopen("binary.dat", "wb");
    int arr[10]={1,121,12,214,1234,124}
    fread(&num,sizeof(uint64_t),1,fp);
    printf("%lu\n",arr);
    fclose(fp);
       #else
    FILE *fp = fopen("binary.dat", "rb");
    int arr[10];
    uint64_t num;
    fread(arr,sizeof(int),6,fp);
    //for(int i)
    printf("%lu\n",arr);
    fclose(fp);
    #endif

    */
