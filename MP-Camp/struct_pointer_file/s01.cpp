#include <stdio.h>

struct Student{
	char name[20];
	int age;
};

int main(){
	int n;
	scanf("%d", &n);
	
	struct Student student[n];
	
	int i;
	for(i = 0; i < n; i++){
		scanf("%s %d", &student[i].name, &student[i].age);
	}
	
	int minage = 0;
	for(i = 0; i < n; i++){
		if(student[i].age < student[minage].age){
			minage = i;
		}
	}
	
	printf("%s", student[minage].name);
	
	return 0;
}
