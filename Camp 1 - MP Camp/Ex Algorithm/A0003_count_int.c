#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int cnt[200] = {};

    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        cnt[a+100]++;
    }

    for(int i = 0; i < 200; i++){
        if(cnt[i] != 0){
            printf("(%d) : %d\n", i-100, cnt[i]);
        }
    }

    return 0;
}

//7
// -19 4 9 4 4 -19 -56
// (-56) : 1
// (-19) : 2
// (4) : 3
// (9) : 1