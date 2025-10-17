#include <stdio.h>
#include <string.h>

int main(){
	char name[10], surname[10], gender[7];
	scanf("%s %s %s", name, surname, gender);
	
	int cmp = strcmp(gender, "Male");
	if(cmp == 0){
		printf("Mr. ");
	}
	else{
		printf("Mrs. ");
	}
	
	printf("%s%s", name, surname);
	
	return 0;
}
