#include <stdio.h>

int main(){
    long long a, b, n;
    int x;
    scanf("%lld %lld %d", &a, &b, &x);
 
    n = a*b;
    int ab[100001];

    int i = 0;
    while(n){
        ab[i++] = n%10;
        n /= 10;
    }

    if(i - x < 0) printf("_");
    else printf("%d", ab[i-x]);

    return 0; 
}