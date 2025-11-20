#include <stdio.h>

int main(){
	int i, j, a[10];
	
	for(i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Element\tValue\tHistogram\n");
	
	for(i = 0; i < 10; i++){
		printf("%d\t%d\t", i, a[i]);
		for(j = 0; j < a[i]; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
