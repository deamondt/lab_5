#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main(){
	
	int A[3][3], B[3][3], C[3][3];
	int i, j, k;
	
	srand(time(0));
	for (i = 0; i < N; i++)
        for (j = 0; j < N; j++){
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
	
	for(i = 0; i < N; i++)
        for(j = 0; j < N; j++){
            C[i][j] = 0;
			for(k = 0; k < N; k++)
			    C[i][j] += A[i][k] * B[k][j];
    }

    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++){
            C[i][j] = 0;
			for(k = 0; k < N; k++)
			    C[i][j] += A[i][k] * B[k][j];
		}
    
    printf("matrix A:\n");
    
	for (i = 0; i < N; i++){
        for (j = 0; j < N; j++)
            printf("%d ", A[i][j]);
            printf("\n");
    }

    printf("\nmatrix B:\n");
   
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++)
            printf("%d ", B[i][j]);
            printf("\n");
    }
    
	printf("\nThe result of multiplying:\n");
    
	for (i = 0; i < N; i++){
        for (j = 0; j < N; j++)
            printf("%3d ", C[i][j]);
            printf("\n");
	}

	return 0;
	
}

