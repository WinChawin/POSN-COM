#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int y = x++;
    printf("%d", --y);

    return 0;
}

// input 5
// 4