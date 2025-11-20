#include <stdio.h>

int main(){
	int n, i, sum = 0, min, max;
	
	scanf("%d",&n);
	sum += n;
	min = n;
	max = n;
	
	for(i = 0; i < 9; i++){
		scanf("%d",&n);
		sum+=n;
		if(n < min){
			min = n;
		}
		if(n > max){
			max = n;
		}
	}
	float avg = (int)sum*0.1;
	
	printf("Sum : %d\n", sum);
	printf("Avg : %.2f\n", avg);
	printf("Max : %d\n", max); 
	printf("Min : %d\n", min);
	
	return 0;
}
