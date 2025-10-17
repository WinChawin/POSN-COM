#include <stdio.h>

int main(){
	int n, i, j, c;
	scanf("%d", &n);
	
	if(n > 0){
		for(i = 1; i <= n; i++){
			c = 65;
			for(j = 1; j <= i; j++){
				printf("%c ", c);
				c++;
			}
			printf("\n");
		}	
	}
	else{
		printf("Invalid input");
	}
	
	return 0;
}
