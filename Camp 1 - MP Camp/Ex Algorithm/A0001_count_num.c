#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int cnt[10] = {};

    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        cnt[a]++;
    }

    for(int i = 1; i < 10; i++){
        if(cnt[i] != 0){
            printf("(%d) : %d\n", i, cnt[i]);
        }
    }

    return 0;
}

// 7
// 1 1 3 5 7 3 2
// (1) : 2
// (2) : 1
// (3) : 2
// (5) : 1
// (7) : 1