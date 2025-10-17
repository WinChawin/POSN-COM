#include <stdio.h>

int main(){
	int i, j;
	int s[4];
	for(i = 0; i < 4; i++){
		scanf("%d", &s[i]);
	}
	
	for(i = 0; i < 4-1; i++){
		for(j = 0; j < 4-i-1; j++){
			if(s[j] > s[j+1]){
				int temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}
	}
	
	printf("%d", s[0] * s[2]);
	
	return 0;
}