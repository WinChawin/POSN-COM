#include <stdio.h>

int main(){
	int i, j, n;
	scanf("%d", &n);
	
	if(n > 0){
		for(i = 1; i <= n; i++){
			for(j = 0; j < n-i; j++){
				printf(" ");
			}
			
			if(i == 1){
				printf("0");
			}
			else{
				for(j = 1; j <= i; j++){
					printf("%d", j);
				}
			
				for(j = i-1; j >= 1;j--){
					printf("%d", j);
				}
			}
			printf("\n");
		}	
	}
	else{
		printf("Invalid input");
	}
	
	return 0;
}
