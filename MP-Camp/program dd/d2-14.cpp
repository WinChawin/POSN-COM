#include <stdio.h>
#include <string.h>

int main(){
	char s[1001];
	
	scanf("%s", s);
	
	int len = strlen(s);
	
	char num[][10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
	
	int ch = s[len-1] -'0';
	printf("%s", num[ch]);
} 


