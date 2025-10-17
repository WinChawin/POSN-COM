#include <stdio.h>

int f_x(int a, int b){
    int m;
    m = (a + b) * (a + b);
    return m;
}

int main(void){
    int a, b, m;
    a = 3;
    b = 4;
    m = 5;
    printf("data1 = %d\n", f_x(a, b));
    printf("data2 = %d\n", m + 5);
    printf("data3 = %c\n", 'B' + 36%13);
}


// 49
// 10
// L