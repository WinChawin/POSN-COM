#include <stdio.h>

int main(){
    int n, cnt = 0;
    long long numerator = 1, denominator = 1;

    scanf("%d", &n);

    if (n % 2 == 1) {
        n++;
    }

    for (int i = n; i > n / 2; i--) {
        numerator *= i; 
        cnt++;       
        denominator *= cnt; 
    }

    printf("%lld\n", numerator / denominator);
    
    return 0;
}

// 80/100
// #include <stdio.h>

// long long fac(int x) {
//     long long result = 1;
//     for(int i = 1; i <= x; i++) {
//         result *= i;
//     }
//     return result;
// }


// double c(int n, int r){
//     long long num = fac(n);
//     long long den = fac(r) * fac(n-r);
//     return (double)num/den;
// }

// int main(){
//     int n;
//     scanf("%d", &n);

//     if(n%2==1) n++;

//     printf("%.0f", c(n, n/2));

//     return 0;
// }