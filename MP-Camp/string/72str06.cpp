#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char card[20];
	int sum = 0;
	gets(card);
	
	int i, n;
	for(i = 0; i < strlen(card); i++){
		if(isdigit(card[i])){
			if(i%2 == 1){
				n = (card[i] - '0')*2;
			}
			else{
				n = card[i] - '0';
			}
			if (n > 9){
				sum += n%10;
				sum += n/10;
			}
			else{
				sum += n;
			}
		}
	}
	if(sum%10==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	
	return 0;
}
