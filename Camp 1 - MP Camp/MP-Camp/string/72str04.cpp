#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char str[100];
	gets(str);
	
	int i, cntdigit = 0, vcnt = 0, ccnt = 0;
	for(i = 0; str[i] != '\0'; i++){
		if(isdigit(str[i])){
			cntdigit++;
		}
		else{
			str[i] = tolower(str[i]);
			if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u')){
				vcnt++;
			}
			else{
				ccnt++;
			}
		}
	}
	printf("%d %d %d %d", strlen(str), cntdigit, ccnt, vcnt);
	return 0;
}
