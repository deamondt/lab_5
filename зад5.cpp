#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int mas[100][100];
    int i, j, size;
	
	printf("Enter size: ");
	scanf("%d", &size);
	
	for(i = 0; i < size; i++){
		for ( j = 0; j < size; j++){
			if(i >= size - 1){
				mas[i][j] = 0;
			} else {
				mas[i][j] = 1;
			}
		}
	}

	
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++)
		printf("%3d", mas[i][j]);
		printf("\n");
	}
	
	return 0;
}
