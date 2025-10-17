#include <stdio.h>

int main(){
    int d, m;
    scanf("%d %d", &d, &m);

    char day[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int sum = d;
    for(int i = 0; i < m-1; i++){
        sum += month[i];
    }

    printf("%s", day[(sum+2)%7]);

    return 0;
}