#define _USE_MATH_DEFINES  // เปิดใช้งาน math constants
#include <stdio.h>
#include <math.h>

int main(){
    // ceil, floor, pow, sqrt, fabs, round
    printf("ceil(4.2) = %.1f\n", ceil(4.2));        // ปัดขึ้น
    printf("floor(4.2) = %.1f\n", floor(4.2));      // ปัดลง
    printf("pow(2, 3) = %.1f\n", pow(2, 3));        // 2^3
    printf("sqrt(16) = %.1f\n", sqrt(16));          // รากที่สอง
    printf("fabs(-4.2) = %.1f\n", fabs(-4.2));      // ค่าสัมบูรณ์
    printf("round(4.2) = %.1f\n", round(4.2));      // ปัดเศษทศนิยม

    printf("%.2f\n", 5.6789); // .2f = ทศนิยม 2 ตำแหน่ง
    printf("%.3f\n", 5.6789); // .3f = ทศนิยม 3 ตำแหน่ง
    printf("%.3f\n", ceil(3.79859)); // .3f = ทศนิยม 3 ตำแหน่ง

    float r;
    scanf("%f", &r);
    float area = M_PI * pow(r, 2);
    printf("Area = %f\n", area);
    return 0;
}