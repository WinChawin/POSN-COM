#include <stdio.h>

int leap(int y){
	return (((y%4==0) && (y%100 != 0)) || (y%400 == 0));
}

int day(int m){
	int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	return day[m-1];
}

int main(){
	int m, y;
	scanf("%d %d", &m, &y);
	
	if(m == 2){
		if(leap(y)) printf("28");
		else printf("29");
	}
	else printf("%d", day(m));
}

