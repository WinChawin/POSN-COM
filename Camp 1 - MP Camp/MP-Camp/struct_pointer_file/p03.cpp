#include <stdio.h>
#include <string.h>

int main(){
	char str1[100], str2[100];
	char *p1 = str1;
	char *p2 = str2;
	int f1[123] = {}, f2[123] = {};
	
	scanf("%s %s", str1, str2);
	
	int i;
	for(i = 0; i < strlen(str1); i++){
		f1[*p1]++;
		p1++;
	}
	
	for(i = 0; i < strlen(str2); i++){
		f2[*p2]++;
		p2++;
	}
	
	int anagram = 1;
	for(i = 0; i < 123; i++){
		if(f1[i] != f2[i]){
			anagram = 0;
			break;
		}
	}
	
	if(anagram){
		printf("yes");
	}
	else{
		printf("no");
	}
	
	return 0;
}
