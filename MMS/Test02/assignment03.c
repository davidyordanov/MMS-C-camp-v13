
    #include <stdio.h> 
    #define MAX 10001 
    
    int main(void) { 
    	int i; 
    	char string[MAX]; 
    	scanf("%s",string); 
    	 
    	int a[MAX]; 
        
    	while(string[i]){ 
            char b[MAX];
    		a[i] = (int)string[i]-48; 
            if (i%2==0){
            if (a[i]==0) b[i]='A';
            if (a[i]==1) b[i]='B';
            if (a[i]==2) b[i]='C';
            if (a[i]==3) b[i]='D';
            if (a[i]==4) b[i]='E';
            if (a[i]==5) b[i]='F';
            if (a[i]==6) b[i]='G';
            if (a[i]==7) b[i]='H';
            if (a[i]==8) b[i]='Y';
            if (a[i]==9) b[i]='J';
        }
        else{
            if (a[i]==0) b[i]='!';
            if (a[i]==1) b[i]='#';
            if (a[i]==2) b[i]='/';
            if (a[i]==3) b[i]='~';
            if (a[i]==4) b[i]='=';
            if (a[i]==5) b[i]='\'';
            if (a[i]==6) b[i]='\\';
            if (a[i]==7) b[i]='>';
            if (a[i]==8) b[i]='.';
            if (a[i]==9) b[i]=',';


        }
    			printf("%s",&b[i]); 
    			i++; 
    	} 
    	return 0; 
    } 