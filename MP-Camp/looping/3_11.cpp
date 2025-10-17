#include <stdio.h>

int main(){
	int wd, aday, i, j, d = 1;
	scanf("%d %d", &wd, &aday);
	
	int blank = wd - 1;
	
	for(i = 0; i < 5 && d <= aday; i++){
		for(j = 0; j < 7; j++){
			if((i == 00) && (j < blank)){
				printf("\t");
			}
			else if(d  <= aday){
				printf("%d\t", d);
				d++;
			}
		}
		printf("\n");
	}
	
	return 0;
}
