#include <stdio.h>

int isPrime(int n){
	int i;
	if (n >= 2){
		for(i = 2; i * i <= n; i++){
			if (n%i == 0){
				return  0;
			}
		}	
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int i, n, count = 0;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++){
		if (isPrime(i)){
			count++;
			printf("%d\n", i);
		}
	}
	
	printf("count - %d", count);
	return 0;
}
