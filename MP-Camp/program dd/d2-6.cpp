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
	int i, j, prime[25] = {}, n = 100, m = 1, count = 0;
	
	for(i = 1; i <= n; i++){
		if(isPrime(i)){
			prime[count] = i;
			count++;
		}
	}
	
	count = 0;
	for(i = 0; i < 4 && m <= 100; i++){
		for(j = 0; j < 7; j++){
			printf("%d\t", prime[count]);
			if (count == 24){
				break;
			}
			count++;
		}
		printf("\n");
	}
	
	return 0;
}
