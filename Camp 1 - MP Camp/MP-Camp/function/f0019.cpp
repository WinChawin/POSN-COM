#include <stdio.h>
#include <string.h>

void upper(char str[]){
	int i;
	for(i = 0; i < strlen(str); i++){
		if((str[i] >= 'a') && (str[i] <= 'z')){
			str[i] -= 32;
		}
	}
}

int main(){
	char text[100];
	scanf("%s", text);
	
	upper(text); 
	
	printf("%s", text);
	 
	return 0;
}
