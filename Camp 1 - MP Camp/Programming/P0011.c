#include <stdio.h>

int main(){
    int cnt = 0, f[42] = {};

    for(int i = 0; i < 10; i++){
        int x;
        scanf("%d", &x);

        int r = x%42;
        if(f[r] == 0) cnt++;
        f[r]++;
    }

    printf("%d", cnt);

    return 0;
}