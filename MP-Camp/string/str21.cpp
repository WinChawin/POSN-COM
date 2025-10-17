#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	char word[100][100];
	gets(str);
	
	int i, j, k = 0;
	
	char *token = strtok(str," ");
	while(token != NULL){
		strcpy(word[i++], token);
		token = strtok(NULL," ");
	}
	
	for(j = 0; j < i; j++){
		for(k = j+1; k < i; k++){
			if(strcmp(word[j], word[k]) == 0){
				printf("%s",word[j]);
				return 0;
			}
		}
	}
	
	printf("No Duplicate");
	
	return 0;
}
