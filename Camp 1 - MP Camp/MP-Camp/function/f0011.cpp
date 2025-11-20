#include <stdio.h>
#include <math.h>

void q(int a, int b, int c, float *x1, float *x2){
	float d = (b*b) - (4*a*c);
	if ((d >= 0) && (a != 0)){
		*x1 = (-b + sqrt(d)) / (2*a);
		*x2 = (-b - sqrt(d)) / (2*a);
	}
}

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	float x1 = 0;
	float x2 = 0;
	
	q(a, b, c, &x1, &x2);
	
	printf("%.2f %.2f", x1, x2);
	
	return 0;
}
