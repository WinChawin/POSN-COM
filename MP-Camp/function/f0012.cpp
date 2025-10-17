#include <stdio.h>

float test(int score, int full){
	float per = ((float)score/full) * 100;
	return per;
}

int main(){
	int score, full;
	scanf("%d %d", &score, &full); 
	
	printf("%.2f%%", test(score, full));
	
	
}


