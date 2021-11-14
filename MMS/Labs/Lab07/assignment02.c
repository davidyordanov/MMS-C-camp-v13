#include <stdio.h>

int myStrcat(const char *str1, const char *str2, char *destination){
    int destLen = 0,str2I;
    while (str1[destLen]!='\0'){
        destination[destLen] = str1[destLen];
        destLen++;
        
    }
   // return destination;
   str1Size = destLen;
   //destination[destLen] = '\0';
   while (str2[str2I] !='\0'){
       destination[destLen] = str2[str2I];
       destLen++;
       str2I++;
   }

   destination[destLen] = '\0';
   
    
}

int main(){
    char res[1000];
    //scanf("%s", input);
    myStrcat("Hello", "World", res);
    printf("%s\n", res);

 
    return 0;
}