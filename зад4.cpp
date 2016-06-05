#include <stdio.h>
#include <stdlib.h>


int main(){

	int i, j, size;
	int mas[100][100];
	
	printf("Enter size: ");
	scanf("%d", &size);
	
	for(i = 0; i < size; i++) {
		for(j = 0; j < size; j++)
			if(i <= size / 2) {
				if((j >= i) && (j < (size - i)))
					mas[i][j] = 1;
				else
					mas[i][j] = 0;
			} else {
				if((j <= i) && (j >= size - i - 1))
					mas[i][j] = 1;
				else
					mas[i][j] = 0;
			}
	}
	
	for(i = 0; i < size; i++) {
		for(j = 0; j < size; j++)
			printf("%3d", mas[i][j]);
			printf("\n");
	}
	
	return 0;
}
