#include <stdio.h>

int main(){
	int arr[3];
	
	for (int i = 0; i < 3; i++){
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < 3-1; i++){
		for (int j = 0; j < 3-i-1; j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	char s[4];
	scanf("%s", &s);
	
	for (int i = 0; i < 3; i++){
		if (s[i] == 'A'){
			printf("%d ", arr[0]);
		}
		else if (s[i] == 'B'){
			printf("%d ", arr[1]);
		}
		else if (s[i] == 'C'){
			printf("%d ", arr[2]);
		}
	}
	
	return 0;
}