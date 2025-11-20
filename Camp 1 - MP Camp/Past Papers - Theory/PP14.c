#include <stdio.h>

int main(void){
    int mx = 0, my = 1, x, fib = 0;
    for(x = 0; x < 17; x++){      // ตอบ 17
        fib = mx+my;
        mx = my;
        my = fib;
        printf("%d ", fib);
    }
    printf("Ans = %d\n", fib);
    return 0;
}

// ถ้า x < 1 จะได้ ans = 1
// ถ้า ans = 2584 แล้ว x < เท่าไหร่