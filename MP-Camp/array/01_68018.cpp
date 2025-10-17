#include <stdio.h>

int main(){
	int na[5];
	int i;
	
	for(i = 4; i >= 0; i--){
		scanf("%d", &na[i]);
	}
	for(i = 0; i < 5; i++){
		printf("%d\n", na[i]);
	}
	
	return 0;
}
