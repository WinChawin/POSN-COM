#include <stdio.h>

int main(){
    int n, s;
    scanf("%d %d", &n, &s);

    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        if(a[i] == s){
            printf("%d", i+1);
            return 0;
        } 
    }

    printf("-1");

    return 0;
}