#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char str[100];
	gets(str);
	
	printf("%d Characters\n", strlen(str));
	
	int i;
	for(i = strlen(str)-1; i >= 0; i--){
		printf("%c", str[i]);
	}
	printf("\n");
	int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
	for(i = 0; i < strlen(str); i++){
		str[i] = toupper(str[i]);
		printf("%c", str[i]);
		if (str[i] == 'A'){
			acnt++;
		}
		if (str[i] == 'E'){
			ecnt++;
		}
		if (str[i] == 'I'){
			icnt++;
		}
		if (str[i] == 'O'){
			ocnt++;
		}
		if (str[i] == 'U'){
			ucnt++;
		}
	}
	printf("\n");
	printf("%d", acnt);
	printf("%d", ecnt);
	printf("%d", icnt);
	printf("%d", ocnt);
	printf("%d", ucnt);
		
	return 0;
}


