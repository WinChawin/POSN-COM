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
	
	struct Student student[n];
	
	int i;
	for(i = 0; i < n; i++){
		scanf("%s %d %d %d %d", &student[i].name, &student[i].day, &student[i].month, &student[i].year, &student[i].id);
	}
	
	for(i = 0; i < n; i++){
		int age = 2025-student[i].year;
		printf("%d %s %d %d %d %d\n", student[i].id, student[i].name, age, student[i].year, student[i].month, student[i].day);
	}
	
	return 0;
}
