#include <stdio.h>

int  main(){
	float sum = 0, avg, i, x;
	
	for(i = 0; i < 10; i++){
		scanf("%f", &x);
		sum += x;
	}
	
	avg = sum / 10;
	
	printf("%.2f", avg);
	
	return 0;
}
