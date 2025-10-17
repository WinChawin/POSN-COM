#include <stdio.h>

struct Student{
	char name[20];
	int day;
	int month;
	int year;
	int id;	
};

int main(){
	int n;
	scanf("%d", &n);
	
	int studentid;
	scanf("%d", &studentid);
	
	struct Student student[n];
	
	int i;
	for(i = 0; i < n; i++){
		scanf("%s %d", &student[i].name, &student[i].id);
	}
	
	for(i = 0; i < n; i++){
		if(student[i].id == studentid){
			printf("%s %d", student[i].name, student[i].id);
			return 0;
		}
	}
	
	printf("NO STUDENT");
	
	return 0;
}
