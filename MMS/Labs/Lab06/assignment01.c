#include <stdio.h>

char changeSymbol(char sym) {
    if (sym >='A'&& sym<='Z')
    {
        /* code */
        return sym + ('a'-'A');
    }
    else if(sym>='0'&&sym<='9'){
        return sym + ('A'-'0');
    } else {
        return '\'';
    }
    
}

char changeSymbolTwo(char sym){
    return (sym>='A'&&sym<='Z')?(sym|' '):
           ((sym>='0'&&sym<='9')? sym+('A'-'0'):
           '\'');
}

int main(void)
{

 
char c;
scanf("%c", &c);


//printf("%d\n", c);
printf("%c\n", changeSymbol(c));
printf("%c\n", changeSymbolTwo(c));

}



int)