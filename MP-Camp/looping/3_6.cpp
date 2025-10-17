#include <stdio.h>

int main(){
	char c;
	scanf("%c", &c);
	
	if(c - 'A' > 26){
		c-=32;
	}
	
	int i, ascii = (int)c;
	for(i = ascii; i >= 65; i--){
		char al = i;
		printf("%c ", al);
	}
	
	return 0;
}
