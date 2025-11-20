#include <stdio.h>
#include <string.h>

int main(){
	char str1[11];
	char str2[11];
	char *p1 = str1;
	char *p2 = str2;
	
	scanf("%s", &str1);
	
	int i;
	for(i = 0; i < strlen(str1); i++){
		*p2 = *p1;
		p1++;
		p2++;
	}
	*p2 = '\0';
	
	printf("%s\n", str1);
	printf("%s", str2);
	
	return 0;
}
