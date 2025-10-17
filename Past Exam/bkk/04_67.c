#include <stdio.h>

int main(){
    int d;
    scanf("%d", &d);

    int day = d-(141%7);
    if(day < 1){
        day += 7;
    }

    printf("%d", day); 

    return 0;
}