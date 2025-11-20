#include <stdio.h>

int main(){
	char bi[5];
	int dec = 0;
	
	scanf("%s", bi);
	
	int i;
	for(i = 0; i < 5; i++){
		dec = dec * 2 + (bi[i] - '0');
	}
	
	printf("%d", dec);
	
	return 0;
}
