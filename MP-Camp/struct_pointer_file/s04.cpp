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
	
	int month;
	scanf("%d", &month);
	
	struct Student student[n];
	
	int i;
	for(i = 0; i < n; i++){
		scanf("%s %d %d %d", &student[i].name, &student[i].day, &student[i].month, &student[i].year);
	}
	
	int cnt = 0;
	for(i = 0; i < n; i++){
		if(student[i].month == month){
			printf("%s %d %d %d\n", student[i].name, student[i].day, student[i].month, student[i].year);
			cnt++;
		}
	}
	
	if(cnt == 0){
		printf("NO STUDENT");
	}
	
	return 0;
}
