#include <stdio.h>

int main(){
	int arr[10];
	int *ptr = arr;
	int sum;
	
	int i;
	for(i = 0; i < 10; i++){
		scanf("%d", (ptr + i));
	}
	
	for(i = 0; i < 10; i++){
		sum += *(ptr + i);
	}
	
	printf("%d", sum);
	
	return 0;
}
