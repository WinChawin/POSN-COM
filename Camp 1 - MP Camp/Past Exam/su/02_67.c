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
    int n, cnt = 0, prime[5];
    scanf("%d", &n);

    for(int i = n-1; i >= 2 && cnt < 5; i--){
        if(isPrime(i)){
            prime[cnt++] = i;
        }
    }

    for(int i = 4; i >= 0; i--){
        printf("%d ", prime[i]);
    }

    return 0;
}