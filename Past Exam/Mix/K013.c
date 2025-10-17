#include <stdio.h>

int main(){
    int n, l, w;
    scanf("%d %d %d", &n, &l, &w);

    char c = 'A'; 
    int r = 0;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < l; j++){
            if(r>25) r = 0;
            else if(r >= n) r = 0;
            printf("%c", c+r);
            r++;
        }
        printf("\n");
        r--;
    }

    return 0;
}