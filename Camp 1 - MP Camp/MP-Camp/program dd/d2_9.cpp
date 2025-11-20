#include <stdio.h>

int main(){
	int i, j, s, e;
	scanf("%d %d", &s, &e);
	
	for(i = 1; i <= 12; i++){
		for(j = s; j<= e; j++){
			printf("%d x %d=  %d\t", j, i, i*j);
		}
		printf("\n");
	}
}
