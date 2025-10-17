#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int max = 0, r[n];
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        r[i] = x;

        if(x > max) max = x;
    }

    for(int i = 0; i < max; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < 2*r[j]; k++){
                if(i < r[j] && i == k) printf("\\");
                else if(i < r[j] && i+k == (2*r[j])-1) printf("/");
                else printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}