#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int win = 0, sum = 0;

    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);

        if(x > win){
            sum += x;
            win = x;
        }
    }

    printf("%d", sum);

    return 0;
}