#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char str[100];
	int sum = 0;
	
	gets(str);
	
	int i, num;
	for(i = 0; str[i] != '\0'; i++){
		if(isdigit(str[i])){
			num = 0;
			while(isdigit(str[i])){
				num = num*10 + (str[i] - '0');
				i++;
			}
			sum += num;
		}
	}
	
	printf("%d", sum);
	
	return 0;
}
