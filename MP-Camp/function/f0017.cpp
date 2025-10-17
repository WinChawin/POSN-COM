#include <stdio.h>

void sort(int n, int arr[]){
	int i, j;
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	} 
}

int main(){
	int n;
	scanf("%d", &n);
	
	int arr[n] = {};
	
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	sort(n, arr);
	
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
