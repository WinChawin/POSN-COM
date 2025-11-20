#include <stdio.h>

int main(){
	int ma[5][3];
	int i, j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){
			int x;
			scanf("%d", &x);
			ma[i][j] = x;
		}
	}
	
	int col1 = 0, col2 = 0, col3 = 0;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
			if(i == 0){
				col1 += ma[j][i];
			}
			else if(i == 1){
				col2 += ma[j][i];
			}
			else if(i == 2){
				col3 += ma[j][i];
			}
		}
	}
	
	printf("Col 1 : %d\n", col1);
	printf("Col 2 : %d\n", col2);
	printf("Col 3 : %d\n", col3);
	
	return 0;
}
