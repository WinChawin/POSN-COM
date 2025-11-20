#include <stdio.h>

int main(){
	int n, i, j;
	int arr[n];
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		
		arr[i] = x
	}
	
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j]; 
				arr[j] = arr[j + 1]; 
				arr[j + 1] = t;
			}
		}
	}
	
	for(i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		arr[i] = x
	}
	
	return 0;
}
