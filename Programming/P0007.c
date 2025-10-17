#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846

int main(){
    double r;
    scanf("%lf", &r);

    double area = pi*(r*r);
    double taxi = r*r*2;

    printf("%.6f\n", area);
    printf("%.6f", taxi);

    return 0;
} 