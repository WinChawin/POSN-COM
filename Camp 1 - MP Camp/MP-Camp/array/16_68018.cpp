#include <stdio.h>

int main(){
	int n, m, i;
	scanf("%d", &n);
	
	printf("2 x ");
	int sum = 2;
	
	for(i = 3; i <= n; i++){
		printf("%d ", i);
		sum *= i;
		if(i != n){
			printf("x ");
		}
		else{
			printf("= %d", sum);
		}
	}
	
	return 0;
}
