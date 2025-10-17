#include <stdio.h>

int sum(int min, int max){
	if(min == max) return max;
	return min + sum(min+1, max); 
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d", sum(a, b));
	
	return 0;
}
