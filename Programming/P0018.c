#include <stdio.h>
#include <string.h>

int main(){
	int n, k, i, j;
	scanf("%d %d", &n, &k);
	int a[n+1];
	memset(a, 0, sizeof(a));
	
	int count = 0;
	
	for(i = 2; i <= n; i++){
		if(a[i]){
			continue;
		}
		for (j = i; j <= n; j += i){
			if (!a[j]){
				a[j] = 1;
				count++;
				if (count == k){
					printf("%d", j);
					return 0;
				}
			}
		}
	}
	
	return 0;
}
