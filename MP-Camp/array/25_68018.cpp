#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("invalid input\n");
		return 0;
	}
	
	char ch = 'A';
	for (int i = 1; i <= n; i++) {
		char row[100];
		for (int j = 0; j < i; j++) {
			row[j] = ch;
			ch++;
		if (ch > 'Z') ch = 'A';
		}
	
		for (int j = i - 1; j >= 0; j--) {
			printf("%c", row[j]);
		}
		printf("\n");
	}
	
	return 0;
}

