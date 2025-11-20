#include <stdio.h>

int main(){
	int A[3][2]; 
	int B[3][2];
	int i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("\nMatrix A\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix A transpose\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", A[j][i]);
		}
		printf("\n");
	} 
	
	
	
	return 0;
}
