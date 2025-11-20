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
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        if(isPrime(i)){
            printf("%d\n", i);
        }
    }

    return 0;
}