#include <stdio.h>

float median(int n, int arr[]){
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
	
	if(n%2==1) return arr[n/2];
	else return (float)(arr[(n-1)/2] + arr[n/2]) / 2.0;
}

int main(){
	int n;
	scanf("%d", &n);
	
	int arr[n] = {};
	
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("%.2f", median(n, arr));
	
	return 0;
}
