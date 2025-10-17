#include <stdio.h>

int main(){
	int seta[4], setb[4], i, j, count = 0;
	
	printf("Set A :\n");
	for(i = 0; i < 4; i++){
		scanf("%d", &seta[i]);
	}
	printf("Set B :\n");
	for(i = 0; i < 4; i++){
		scanf("%d", &setb[i]);
	}
	
	for(i = 0; i < 4; i++){
		int n = seta[i];
		for(j = 0; j < 4; j++){
			if(seta[i] == setb[j]){
				count++;
				break;
			}
		}
	}
	printf("Quantity of the same number : %d", count);
	
	return 0;
}
