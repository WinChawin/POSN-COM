#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int sum = 0;
    for(int i = n; i < m; i++){
        if((i%2==0) || (i%3==0)){
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}