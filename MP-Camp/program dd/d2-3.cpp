#include <stdio.h>

int main(){
	int n, i, min;
	printf("Enter number for loop : ");
	scanf("%d", &n);
	
	printf("Number #1 : ");
	scanf("%d", &min);
	
	for(i = 2; i <= n; i++){
		int x;
		printf("Number #%d : ", i);
		scanf("%d", &x);
		if(x < min){
			min = x;
		}
	}
	
	printf("\nMinimum is %d", min);
	
	return 0;
}
