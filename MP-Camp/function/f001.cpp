#include <stdio.h>

int area(int a, int b){
	return a*b;	
}

int main(){
	int w, h;
	scanf("%d %d", &w, &h);
	
	printf("%d", area(w, h));
	
	return 0;
}
