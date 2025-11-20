#include <stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	
	if(n > 0){
		for(i = 1; i <= n; i++){
			for(j = 1; j <= i; j++){
				printf("%d ", i*j);
			}
			printf("\n");
		}	
	}
	else{
		printf("Invalid input");
	}
	
	return 0;
}
