#include <stdio.h>

int main(){
	int ma[3][2], mb[3][2], sum = 0;
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			int x;
			scanf("%d", &x);
			ma[i][j] = x;
			sum += x;
		}
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			int x;
			scanf("%d", &x);
			mb[i][j] = x;
			sum += x;
		}
	}
	
	printf("%d", sum);
}
