#include <stdio.h>

int main(){
	int i, j, n;
	scanf("%d", &n);
	
	if(n > 0){
		for(i = 1; i <= n; i++){
			for(j = 0; j < i-1; j++){
				printf(" ");
			}
			int inner = 2 * (n - i) - 1;

	        if (inner >= 0) {
	            printf("\\"); 
	            for (int j = 0; j <= inner; j++) {
	                printf(" ");
	            }
	            printf("/");      
	        } 
			else {
	            printf("\\/");
	        }
			printf("\n");
		}	
	}
	else{
		printf("Invalid input");
	}
	
	return 0;
}
