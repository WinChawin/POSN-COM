#include <stdio.h>

int main(){
	int n, i, prime = 0;
	scanf("%d", &n);
	
	if (n >= 2){
		for(i = 2; i * i <= n; i++){
			if (n%i == 0){
				prime = 0;
				break;
			}
			else{
				prime = 1;
			}
		}	
	}
	
	if(prime == 1){
		printf("%d - prime number", n);
	}
	else if (prime == 0){
		printf("%d - not prime number", n);
	}
	
	return 0;
}

