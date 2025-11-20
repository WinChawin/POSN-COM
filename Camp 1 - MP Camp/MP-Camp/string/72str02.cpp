#include <stdio.h>
#include <string.h>

int main(){
	char id[14];
	gets(id);
	
	int i;
	for(i = 0; i < 13; i++){
		if((i == 1) || (i == 5) || (i == 10) || (i == 12)){
			printf("-");
		}
		printf("%c", id[i]);
	}
	
	return 0;	
}

