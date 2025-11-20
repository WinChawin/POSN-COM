#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	fgets(str, sizeof(str), stdin);
	printf("%d", strlen(str)-1);
	
	return 0;
}
