#include <stdio.h>

void calendar(int wd, int aday){
	int i, j, d = 1;
	int blank = wd - 1;
	
	for(i = 0; i < 5 && d <= aday; i++){
		for(j = 0; j < 7; j++){
			if((i == 0) && (j < blank)){
				printf("\t");
			}
			else if(d  <= aday){
				printf("%d\t", d);
				d++;
			}
		}
		printf("\n");
	}
}

int main(){
	int wd, aday, i, j, m, d = 1;
	scanf("%d %d", &wd, &aday);
	
	for(m = 0; m < 4; m++){
		calendar(wd, aday);
		
		wd = ((wd + (aday%7)) - 1)%7 + 1;
	}
	
	
	return 0;
}
