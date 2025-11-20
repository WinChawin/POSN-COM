#include <stdio.h>

int sumeven(int n){
	int i, sum = 0;
	for(i = 0; i <= n; i+=2){
		sum += i;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	
	printf("%d", sumeven(n));
	return 0;
}
