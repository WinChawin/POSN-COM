#include <stdio.h>

int main(){
	int A[3][2]; 
	int B[3][2];
	int C[3][2];
	int i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			scanf("%d", &B[i][j]);
		}
	}
	
	printf("\nMatrix A\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix B\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
		printf("\n");
	}
	printf("Matrix A+B\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
