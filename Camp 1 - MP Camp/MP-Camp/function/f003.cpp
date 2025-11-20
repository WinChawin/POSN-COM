#include <stdio.h>

int pow2(int &a){
	return a*a;	
}

int main(){
	int n;
	scanf("%d", &n);
	
	n = pow2(n);
	
	printf("%d", n);
	
	return 0;
}
