#include <stdio.h>

int main(){
	int i, student[10];
	
	for(i = 1; i < 10; i++){
		scanf("%d", &student[i]);
	}
	
	scanf("%d", &student[0]);
	
	for(i = 0; i < 10; i++){
		printf("%d ", student[i]);
	}
	
}
