#include <stdio.h>

int main(){
    int x[] = {1, 6, 9, 3, 2, 6};
    int k = sizeof(x)/ sizeof(x[0]);
    printf("%d", k+=2);

    return 0;
}

// 8