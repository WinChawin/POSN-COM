#include <stdio.h>
#include <string.h>

int vowel(char str[]){
	int i, cnt = 0;
	for(i = 0; i < strlen(str); i++){
		if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u')){
			cnt++;
		}
	}
	
	return cnt;
}

int main(){
	char text[100];
	scanf("%s", text);
	
	printf("%d", vowel(text));
	 
	return 0;
}
