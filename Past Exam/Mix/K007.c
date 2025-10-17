#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int max = 0, m[n];
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        m[i] = x;

        if(x > max) max = x;
    }

    for(int i = 0; i < max; i++){
        for(int j = 0; j < n; j++){
            int h = m[j];
            for(int k = 0; k < 2*h; k++){
                if(i < max-h){
                    printf(" ");
                }
                else{
                    int t = i - (max-h);
                    if(k == (h-1-t)) printf("/");
                    else if(k == h+t) printf("\\");
                    else printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}