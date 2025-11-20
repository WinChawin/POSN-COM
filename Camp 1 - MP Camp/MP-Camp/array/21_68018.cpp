#include <stdio.h>

int main(){
	int n, i, j, c = 65;
	scanf("%d", &n);
	
	if(n > 0){
		for(i = 1; i <= n; i++){
			for(j = 1; j <= i; j++){
				printf("%c ", c);
				c++;
				if(c > 90){
					c = 65;
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
