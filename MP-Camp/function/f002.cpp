#include <stdio.h>

float avg3(int a, int b, int c){
	float avg = (a+b+c)/3;
	return avg;	
}

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%.2f", avg3(a, b, c));
	
	return 0;
}
