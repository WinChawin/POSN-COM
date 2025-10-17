#include <stdio.h>

int main(void){
    char ch1;
    int x, y, z;
    ch1 = 'M';
    x = 3;
    y = 8;
    z = 14;
    printf("Data1 = %d\n", (x+y*z)%8);
    printf("Data2 = %d\n",((x*y)%3+z)%y);
    printf("Data3 = %c\n",ch1+7);
    return 0;
}


// Data1 = 3
// Data2 = 6
// Data3 = T