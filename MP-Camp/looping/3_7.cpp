#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	
	int pn = (n < 0) ? -1:1;
	
	for(i = 1; pn < 0 ? i >= n : i <= n; i += pn){
		printf("%d\t%d\n", i, i*i);
	}
	
	return 0;
}
