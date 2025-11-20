#include <stdio.h>
#include <string.h>

int main(){
	char num[101];
	scanf("%s", num);
	
	int len = strlen(num);
	
	int i, sum = 0;
	
	for(i = 0; i < len; i++){
		sum += num[i] - '0';
	}
	
	printf("%d", sum);
	
	return 0;
}


