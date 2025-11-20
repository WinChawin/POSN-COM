#include <stdio.h>

int main(){
	int i, j, n;
	scanf("%d", &n);
	
	if(n > 0){
		for(i = 1; i <= n; i++){
			for(j = 0; j < n-i; j++){
				printf(" ");
			}
			
			for(j = 0; j < i; j++){
				printf("%d", i-j-1);
			}
		
			for(j = 1; j <= i-1;j++){
				printf("%d", j);
			}
			
			printf("\n");
		}	
	}
	else{
		printf("Invalid input");
	}
	
	return 0;
}
