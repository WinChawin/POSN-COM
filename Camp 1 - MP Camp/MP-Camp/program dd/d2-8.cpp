#include <stdio.h>

int main(){
	int i, j;
	
	for(i = 1; i <= 12; i++){
		for(j = 2; j<= 7; j++){
			printf("%d x %d=  %d\t", j, i, i*j);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 1; i <= 12; i++){
		for(j = 8; j<= 13;j++){
			printf("%d x %d=  %d\t", j, i, i*j);
		}
		printf("\n");
	}
	
	
	return 0;
}
