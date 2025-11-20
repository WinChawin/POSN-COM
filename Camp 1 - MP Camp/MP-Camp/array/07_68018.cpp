#include <stdio.h>

int main(){
	int n, i, count = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &n);
		if (40%n==0){
			count++;
		}
	}
	printf("The number of factors of 40 : %d", count);
	return 0;
}
