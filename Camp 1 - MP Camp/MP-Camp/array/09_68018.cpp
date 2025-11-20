#include <stdio.h>

int main(){
	int i, j, a[10];
	
	for(i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < 5; i++){
		printf("%d", a[i]);
		for(j = 0; j < a[i]; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
