#include <stdio.h>

int main(){
    int dmax, day1, bday, result = 0;
    scanf("%d %d %d", &dmax, &day1, &bday);

    if(bday - 7 > 0) result += bday-7;

    if(bday + 7 <= dmax) result += bday+7;

    int weekday = ((day1 - 1) + (bday - 1)) % 7 + 1;

    if (weekday != 1 && bday - 1 >= 1)     result += bday - 1;
    if (weekday != 7 && bday + 1 <= dmax)  result += bday + 1;

    printf("%d", result);

    return 0;
}