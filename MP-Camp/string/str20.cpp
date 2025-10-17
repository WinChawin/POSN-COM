#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	gets(str);
	
	int i, cnt = 1;
	for(i = 0; str[i] != '\0'; i++){
		if((str[i] == ' ') && ((str[i+1] != '\0') || (str[i+1] != ' '))){
			cnt++;
		}
	}
	printf("%d", cnt);
	
	return 0;
} 
