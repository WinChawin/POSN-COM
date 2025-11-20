#include <stdio.h> 

int main(){
	int ma[4][4];
	int i, j, sum = 0;
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			int x;
			scanf("%d", &x);
			ma[i][j] = x;
		}
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if (i > j){
				sum += ma[i][j];
			}
		}
	}
	
	printf("%d", sum);
	return 0;
}
