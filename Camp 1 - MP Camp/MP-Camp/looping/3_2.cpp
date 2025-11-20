#include <stdio.h>

int main(){
	int i, x, min, max;
	
	scanf("%d", &x);
	min = x;
	max = x;
	
	for(i = 0; i < 9; i++){
		scanf("%d", &x);
		if(x < min){
			min = x;
		}
		else if(x > max){
			max = x;
		}
	}
	
	printf("Min: %d\tMax: %d", min, max);
	
	return 0;
}
