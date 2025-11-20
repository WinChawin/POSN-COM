#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int col = (n%2) ? n : n-1;
    int row = (n%2) ? n : n;
    // printf("%d\n",n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < col; j++){
            if((i+j == (col-1)/2) || (j-i == (col-1)/2) || (i-j == (row)/2) || (i+j == ((2*(n-1))-(n/2)))) printf("*");
            else printf("-");
        }
        printf("\n");
    }

    return 0;
}