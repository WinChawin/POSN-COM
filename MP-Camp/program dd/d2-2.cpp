#include <stdio.h>

int main(){
	int n;
	printf("Enter number 1-12 of Month : ");
	scanf("%d", &n);
	
	char m[12][4] = {"Jan", "Feb", "Mar", "Apr",
					"May", "Jun", "Jul", "Aug",
					"Sep", "Oct", "Nov", "Dec"};
	
	printf("Month name is %s", m[n-1]);
	
	return 0; 
}

