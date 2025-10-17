#include <stdio.h>

int isPrime(long int n){
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
	long int i, n;
	scanf("%ld", &n);
	
	char b[100];
	
	for(i = 0; i < n; i++){
		long int x;
		scanf("%ld", &x);
		if ((isPrime(x)) || (x%2==1)){
			b[i] = 'T';
		}
		else{
			b[i] = 'F';
		}
	}
	
	for(i = 0; i < n; i++){
		printf("%c\n", b[i]);
	}
	
	return 0;
}
