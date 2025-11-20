#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char text[100];
	fgets(text, sizeof(text), stdin);
	
	int i;
	for(i = 0; text[i] != '\0'; i++){
		text[i] = toupper(text[i]);
	}
	printf("%s", text);
	
	return 0;
}
