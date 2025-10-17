#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	scanf("%s", str);
	int  len = strlen(str);
	
	int i;
	for(i = 0; i < len/2; i++){
		if (str[i] != str[len-1-i]){
			printf("Not Palindrome");
			return 0;
		}
	}
	printf("Palindrome");
	
	return 0;
}
