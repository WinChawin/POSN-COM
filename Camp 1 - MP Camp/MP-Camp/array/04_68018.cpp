#include <stdio.h>

int main(){
	int n, i, sum = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d",&n);
		if(i%2==1){
			sum += n;
		}
	}
	
	printf("Sum of number at the ood index : %d", sum);
	return 0;
}
