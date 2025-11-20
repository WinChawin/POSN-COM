#include <stdio.h>

void bMoney(int money){
	int m1000 = 0, m500 = 0, m100 = 0, m50 = 0, m20 = 0, m10 = 0, m5 = 0, m2 = 0, m1 = 0;
	
	if(money>=1000){
		m1000 = money/1000;
		money -= (m1000*1000);
	}
	
	if(money>=500){
		m500 = money/500;
		money -= (m500*500);
	}
	
	if(money>=100){
		m100 = money/100;
		money -= (m100*100);
	}
	
	if(money>=50){
		m50 = money/50;
		money -= (m50*50);
	}
	
	if(money>=20){
		m20 = money/20;
		money -= (m20*20);
	}
	
	if(money>=10){
		m10 = money/10;
		money -= (m10*10);
	}
	if(money>=5){
		m5 = money/5;
		money -= (m5*5);
	}
	
	if(money>=2){
		m2 = money/2;
		money -= (m2*2);
	}
	
	if(money>=1){
		m1 = money/1;
		money -= (m1*1);
	}
	
	
	
	if (m1000 != 0){
		printf("1000 Bath = %d\n", m1000);
	}
	
	if (m500 != 0){
		printf("500 Bath = %d\n", m500);
	}
	
	if (m100 != 0){
		printf("100 Bath = %d\n", m100);
	}
	
	if (m50 != 0){
		printf("50 Bath = %d\n", m50);
	}
	
	if (m20 != 0){
		printf("20 Bath = %d\n", m20);
	}
	
	if (m10 != 0){
		printf("10 Bath = %d\n", m10);
	}
	
	if (m5 != 0){
		printf("5 Bath = %d\n", m5);
	}
	
	if (m2 != 0){
		printf("2 Bath = %d\n", m2);
	}
	
	if (m1 != 0){
		printf("1 Bath = %d\n", m1);
	}
}

int main(){
	int price, paid; 
	scanf("%d %d", &price, &paid);
	
	int change = paid - price;
	
	printf("Change money total: %d Bath\n------------------------\n", change);
	bMoney(change);
	
	return 0;
}
