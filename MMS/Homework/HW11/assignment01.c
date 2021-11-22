#include <stdio.h>
#include <stdlib.h>

int main(){
    double* ptr, *ptr1;
    int n,m,p,i;

    printf("Enter n number of elements:");
    scanf("%d", &n);
    ptr = (double*)calloc(n,sizeof(double));

    if(ptr==NULL){
        printf("Memory not allocated\n");
        exit(0);
    }
    else{
        printf("Memory successfully allocated using malloc\n");
        for(i=0; i<n; ++i){
            double f = (double)rand() / RAND_MAX;
            ptr[i] = 0.0 + f * (1.0 - 0.0);
        }
        
        printf("Enter m number of elements:");
        scanf("%d", &m);
        m=m+n;
         
        ptr = realloc(ptr, m *sizeof(double));

        for (i = n; i < m; ++i) {
            double f = (double)rand() / RAND_MAX;
            ptr[i] = 1.0 + f * (2.0 - 1.0);
        }

        printf("Enter p number of elements:");
        scanf("%d", &p);
        p = p+m;
        ptr = realloc(ptr, p *sizeof(double));

        for (i = m; i < p; ++i) {
            double f = (double)rand() / RAND_MAX;
            ptr[i] = 2.0 + f * (3.0 - 2.0);
        }
        
        printf("The elements of the array are: \n");
        for(i=0; i<p; ++i){
            printf("%.2lf ", ptr[i]);
        }
        free(ptr);

    }
    printf("\n");
    return 0;


}