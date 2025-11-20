#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int cnt = 0;
    while(a!=1) {
        a/=2;
        cnt++;
    }
    while(b!=1) {
        b/=2;
        cnt++;
    }
    while(c!=1) {
        c/=2;
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}