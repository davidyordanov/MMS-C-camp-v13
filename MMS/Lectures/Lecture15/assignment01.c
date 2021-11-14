#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *fp = fopen("copyfile", "r");
    if(fp==NULL){
        printf("Error");
        exit(EXIT_FAILURE);
    }
    int sum = 0;
    int num;
      int position = ftell(fp);
   printf("Pos: %d\n",position);
    fseek(fp,10,SEEK_SET);
printf("Pos: %ld\n",ftell(fp));
    fseek(fp,10,SEEK_SET);
printf("Pos: %ld\n",ftell(fp));
    while ((num=fgetc(fp))!=EOF){
        putchar(num);
    }
   // rewind(fp); //very many vajna
 
    fseek(fp,3,SEEK_CUR);
    printf("Second time: \n");
    while ((num=fgetc(fp))!=EOF){
        putchar(num);
    }
    putchar('\n');
    fclose(fp);

}