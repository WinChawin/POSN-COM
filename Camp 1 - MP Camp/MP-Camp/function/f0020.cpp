#include <stdio.h>
#include <string.h>

int palindrome(char str[]){
	int  len = strlen(str);
	int i;
	for(i = 0; i < len/2; i++){
		if (str[i] != str[len-1-i]){
			return 0;
		}
	}
	return 1;
}

int main(){
	char text[100];
	scanf("%s", text); 
	
	if(palindrome(text)) printf("Palindrome");
	else printf("Not Palindrome"); 
	 
	return 0;
}
