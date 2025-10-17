#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    double ans;

    if(n <= 2){
        ans = 2.0;
    }
    else if(n % 2 == 0){
        ans = (double)n;
    }
    else if(n == 3){
        ans = 2.0 + sqrt(3.0);
    }
    else{
        ans = 2.0 * (1.0 + sqrt(3.0)) + n - 5;
    }

    printf("%.6f\n", ans);
    return 0;
}
