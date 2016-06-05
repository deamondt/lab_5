#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3


int main() {  
    
	int A[100][100], X[100], Y[100];
    int i, j;

    srand(time(0));

    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++){  
            A[i][j] = rand() % 10;  
        } 

    for(i = 0; i < N; i++){ 
        X[i] = rand() % 6 + 1 ; 
    } 

    for (i = 0; i < N; i++){ 
        Y[i] = 0; 
        for (j = 0; j < N; j++){ 
            Y[i] += X[j] * A[i][j];
		}  
    }
	
	printf("Matrix A:\n");
	
	for (i = 0; i < N; i++){
        for (j = 0; j < N; j++)
            printf("%d ", A[i][j]);
            printf("\n");
    }
	
	printf("Vector X:\n");
	
	for (i = 0; i < N; i++){
            printf("%d ", X[i]);
            printf("\n");
    }
	
	printf("\nThe result of multiplying:\n");
	
	for (i = 0; i < N; i++){
            printf("%3d", Y[i]);
            printf("\n");
    } 

    return 0; 
}
