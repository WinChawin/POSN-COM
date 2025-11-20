#include <stdio.h>

int main(){
    int unit;
    float pay = 0;

    scanf("%d", &unit);

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

    printf("%.2f", pay);

    return 0;
}
