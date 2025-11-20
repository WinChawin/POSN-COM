#include <stdio.h>
#include <math.h>   

int main(void){
    int Q;
    scanf("%d", &Q);

    long double N[200005];  
    for(int i = 0; i < Q; ++i){
        scanf("%Lf", &N[i]); 
    }

    for(int i = 0; i < Q; ++i){
        long double ans = powl(2.0L, N[i]);
        printf("%.0Lf\n", ans);
    }
    return 0;
}
