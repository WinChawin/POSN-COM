#include <stdio.h>

int main(){
	int n, i, max;
	printf("Enter number for loop : ");
	scanf("%d", &n);
	
	printf("Number #1 : ");
	scanf("%d", &max);
	
	for(i = 2; i <= n; i++){
		int x;
		printf("Number #%d : ", i);
		scanf("%d", &x);
		if(x > max){
			max = x;
		}
	}
	
	printf("\nMaximum is %d", max);
	
	return 0;
}
