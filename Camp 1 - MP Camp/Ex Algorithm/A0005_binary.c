#include <stdio.h>

int main(){
    int n, r = 0;
    scanf("%d", &n);

    int bin[100];

    while(n > 0){
        bin[r++] = n % 2;
        n/=2;
    }

    for(int j = r-1; j >= 0; j--){
        printf("%d", bin[j]);
    }
    return 0;
}
