#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char text[100];
	fgets(text, sizeof(text), stdin);
	
	int i;
	for(i = 0; text[i] != '\0'; i++){
		if(text[i]-'A' < 26){
			text[i] = tolower((unsigned char)text[i]);
		}
		else{
			text[i] = toupper((unsigned char)text[i]);
		}
	}
	printf("%s", text);
	
	return 0;
}
