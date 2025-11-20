#include <stdio.h>

int main(){
    int n[9];
    for(int i = 0; i < 9; i++){
        scanf("%d", &n[i]);
    }

    int sum9 = 0, x = 10;
    for(int i = 0; i < 9; i++){
        sum9 += n[i]*x--;
    }

    int cnt = 0;
    while(sum9%11 != 0){
        sum9++;
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}