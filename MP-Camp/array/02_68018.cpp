#include <stdio.h>

int main(){
	int n, i, count = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d",&n);
		if(n > 0){
			count++;
		}
	}
	printf("quantity of positive number : %d", count);
	
	return 0;
}
