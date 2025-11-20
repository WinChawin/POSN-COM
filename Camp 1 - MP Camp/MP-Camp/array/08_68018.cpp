#include <stdio.h>

int main() {
	int n, i, j;
	int arr[100];
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
			}
		}
	}
	
	int maxCount = 0;
	int modes[100], modeCount = 0;
	
	int current = arr[0];
	int cnt = 1;
	
	for (i = 1; i <= n; i++) {
		if (i < n && arr[i] == current) {
			cnt++;
		} 
		else {	
			if (cnt > maxCount) {
				maxCount = cnt;
				modes[0] = current;
				modeCount = 1;
			} 
			else if (cnt == maxCount) {
				modes[modeCount++] = current;
			}
	
			if (i < n) {
				current = arr[i];
				cnt = 1;
			}		
		}
	}
	+
	
	printf("Mode: ");
	for (i = 0; i < modeCount; i++) {
		printf("%d ", modes[i]);
		if (i == modeCount - 2) printf("and ");
	}

	return 0;
}

