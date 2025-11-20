#include <stdio.h>

int main(){
    int unit, service;
    float pay = 0;

    scanf("%d %d", &unit, &service);

    if (unit <= 0){
        return 0;
    }

    if(unit > 10){
        int use = (unit > 20) ? 20 : unit;
        pay += use*5;        
    }

    if(unit > 20){
        int use = (unit > 40) ? 20 : unit - 20;
        pay += use*7;        
    }

    if(unit > 40){
        int use = (unit > 100) ? 60 : unit - 40;
        pay += use*10;        
    }

    if(unit > 100){
        pay += (unit - 100)*15;        
    }
	
	float vat = (pay+service)*0.07;
	float total = (pay+service)*1.07;
	
    printf("Water bill before Vat : %.2f Bath\n", pay+service);
    printf("Vat is 7.00%% is %.2f Bath\n", vat);
    printf("Total water bill is %.2f Bath\n", total);

    return 0;
}
