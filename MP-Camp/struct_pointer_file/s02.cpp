#include <stdio.h>

struct Student{
	char name[20];
	int day;
	int month;
	int year;	
};

void sortstudent(struct Student s[], int n){
	int i, j;
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-i-1; j++){
			int newy = 0;
			if(s[j].year < s[j+1].year) newy = 1;
			else if((s[j].year == s[j+1].year) && (s[j].month < s[j+1].month)) newy = 1;
			else if((s[j].year == s[j+1].year) && (s[j].month == s[j+1].month) && (s[j].day < s[j+1].day)) newy = 1;
			
			if(newy){
				struct Student temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}
	}	
}


int main(){
	int n;
	scanf("%d", &n);
	
	struct Student student[n];
	
	int i;
	for(i = 0; i < n; i++){
		scanf("%s %d %d %d", &student[i].name, &student[i].day, &student[i].month, &student[i].year);
	}
	
	sortstudent(student, n);
	printf("%s %d %d %d", student[0].name, student[0].day, student[0].month, student[0].year);
	
	return 0;
}
