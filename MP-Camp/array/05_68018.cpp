#include <stdio.h>

int main(){
	int n, i, sum = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d",&n);
		if (n > 0){
			sum+=n;
		}
	}
	
	printf("Sum of positive number : %d\n", sum);
	
	return 0;
}
