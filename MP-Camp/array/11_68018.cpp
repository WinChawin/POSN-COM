#include <stdio.h>

int main(){
	char bi[5];
	int dec = 0, base = 1;
	
	scanf("%s", bi);
	
	int i;
	for(i = 4; i >= 0; i--){
		if(bi[i] == '1'){
			dec += base;
		}
		base *= 2;
	}
	
	printf("%X", dec);
	
	return 0;
}
