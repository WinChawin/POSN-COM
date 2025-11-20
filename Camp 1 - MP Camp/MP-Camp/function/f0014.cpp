#include <stdio.h>

int sum(int i, int n, int d){
	int sum = 0;
	for(i = i; i <= n; i+=d){
		sum += i;
	}
	return sum;
}

int main(){
	int i, n, d;
	scanf("%d %d %d", &i, &n, &d);
	
	printf("%d", sum(i, n, d));
	return 0;
}
