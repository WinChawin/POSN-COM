#include <stdio.h>

int main(){
    int m, d;
    scanf("%d %d", &m, &d);

    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int days = 11;

    if(m<8){
        for(int i = m-1; i<7; i++){
            days += month[i];
        }
    }
    else if(m>8){
        for(int i = m-1;i < 12;i++){
            days += month[i];
        }
        for(int j = 0;j < 7;j++){
            days += month[j];
        }
        days--;
    }
    printf("%d", (days+d-1)%7+1);

    return 0;
}