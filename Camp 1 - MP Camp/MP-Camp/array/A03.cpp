#include <stdio.h>

int main(){
	int i, student[10];
	
	for(i = 0; i < 10; i++){
		scanf("%d", &student[i]);
	}
	
	int sum = 0;
	
	for(i = 0; i < 10; i++){
		printf("%d ", student[i]);
		sum += student[i];
	}
	
	printf("\n");
	
	float avg = (float)sum/10;
	
	printf("Sum: %d\n", sum);
	printf("Avg: %.2f\n", avg);
	
}
