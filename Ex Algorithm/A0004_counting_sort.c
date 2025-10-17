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
        for(int j = 0; j < cnt[i]; j++){
            printf("%d ", i-100);
        }
    }

    return 0;
}