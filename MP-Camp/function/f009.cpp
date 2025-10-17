#include <stdio.h>

void cal(int a, int b, int c, int d, int e, int *sum, float *avg){
	*sum = a+b+c+d+e;
	*avg = *sum/5;
}

int main(){
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	int sum = 0;
	float avg = 0;
	
	cal(a, b, c, d, e, &sum, &avg);
	
	printf("%d %.2f", sum, avg);
	
	return 0;
}
