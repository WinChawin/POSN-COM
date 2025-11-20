#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);

    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        if(x<min) min = x;
        else if(x > max) max = x;
    }
    printf("%d\n", min);
    printf("%d", max);

    return 0;
}