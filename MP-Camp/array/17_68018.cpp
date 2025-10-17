#include <stdio.h>

int main(){
	int n, i, sum = 0, min, max;
	int x;
	scanf("%d", &x);
	
	scanf("%d",&n);
	if ((n < 0) || (n > 100)){
			printf("Invalid input");
			return 0;
	}
	else{
		sum += n;
		min = n;
		max = n;	 
	}
	
	for(i = 0; i < x-1; i++){
		scanf("%d",&n);
		sum+=n;
		if ((n < 0) || (n > 100)){
			printf("Invalid input");
			return 0;
		}
		else{
			if(n < min){
				min = n;
			}
			if(n > max){
				max = n;
			}
		}
	}
	float avg = (float)sum/x;
	
	printf("Sum : %d\n", sum);
	printf("Avg : %.2f\n", avg);
	printf("Max : %d\n", max); 
	printf("Min : %d\n", min);
	
	return 0;
}
