#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define N 10
#define M 4



//int printMatrix(int** A, sieze_t n, size_t m){

//}

void printMatrix(int** A, size_t n, size_t m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%2d ", A[i][j]);
        }
        putchar('\n');
    }
}
int** scalarMult(int** A, size_t n, size_t m, int num){
    int** R = malloc(sizeof(int*)*n);
    for (int i = 0; i < n; i++){
        R[i] = malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            R[i][j] = num * A[i][j]; 
        }
    }
    return R;
}

int** multMatrix(int** A[], int** B[], size_t na, size_t ma, size_t nb, size_t mb){
    if (ma !=nb){
        return NULL;
    }
        int** C = malloc(sizeof(int*)*na);
        for (int i = 0; i < na; i++){
            C[i]= calloc(mb, sizeof(int));
        }
        for (int i = 0; i < na; i++){
            for (int j = 0; j < mb; j++){
                for (int k = 0; k < nb; k++)
                {
                    C[i][j]+=A[i][k]*B[k][j];
                }
                
            }
            
        }
        
                
}

int** addMatrix(int** A, int** B, size_t n, size_t m){
    int** R = malloc(sizeof(int*)*n);
    for (int i = 0; i < n; i++){
        R[i] = malloc(m * sizeof(int));
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            R[i][j] = A[i][j] + B[i][j]; 
        }
    }
    return R;
}


int main(){

int** A[2][3]={{1,2,3},{4,5,7}};
int** B[3][2]={{7,8},{9,10}, {11,12}};

int ** C = multMatrix(A,B,2,3,3,2);
//printMatrix(C,2,2);

 for (int i = 0;  i < 2; i++){
        free(C[i]);
    }
    free(C);



}
/*
    int i, j;
    int** matrix = malloc(N * sizeof(int*));

    for (i = 0; i < N; i++){
        *(matrix + i) = malloc(M * sizeof(int));
    }

    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            *(*(matrix+i)+j) = rand() % 10; // matrix[i][j] = 
        }
    }


printMatrix(matrix1, N,M);

int** matrix2 = scalarMult(matrix1,N,M,10);
for(int u=0; i<N;i++){
    free(matrix1[i]);
}
free(matrix1);

for(int u=0; i<N;i++){
    free(matrix2[i]);
}
free(matrix2);





    int** matrix2 = malloc(N * sizeof(int*));

    for (i = 0; i < N; i++){
        *(matrix2 + i) = malloc(M * sizeof(int));
    }

    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            *(*(matrix2+i)+j) = rand() % 10;
        }
    }

    int** matrix3 = addMatrix(matrix, matrix2, N, M);

    for (int i = 0; i < N; i++){
        free(matrix3[i]);
    }
    free(matrix3);

    int arr[10];
    printf("%p \n", arr);
    printf("%p \n", &arr);
    return EXIT_SUCCESS;
}
*/
