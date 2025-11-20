#include <stdio.h>

int x = 2, y = 1, m;
int sum = 0;
int main(void){
    for(m = -2; m<48; m++){ // ตอบ 48
        sum = sum+x;
        if((m%5)==1){
            x = m;
        }
    }
    printf("Sum = %d\n", sum);
    return 0;
}

// sum = 999
// m < อะไร 