#include <stdio.h>

int main(){
	int n;
	printf("Enter number for check : ");
	scanf("%d", &n);
	if(n%2==1){
		printf("%d is odd number", n);
	}
	else{
		printf("%d is even number", n);
	}
	return 0;
}


