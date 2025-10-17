#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("1");
        return 0;
    }

    int k = 1;
    while((2*k-1)*(2*k-1) < n) k++;

    int topRight = (2*k - 1) * (2*k - 1) - (2*k - 2);
    int innerTopRight = (k > 1) ? ((2*(k-1)-1)*(2*(k-1)-1) - (2*(k-1)-2)) : 1;

    if(n == topRight - 2){
        printf("Cannot find top-right corner.");
    }
    else if(n < topRight){
        printf("%d", innerTopRight);
    }
    else{
        printf("%d", topRight);
    }

    return 0;
}