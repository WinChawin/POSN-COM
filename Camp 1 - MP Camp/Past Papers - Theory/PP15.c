#include <stdio.h>

char dis = 'A';
int x,y;
int  main(void){
    for (x = 1; x <= 5; x++){
        for(y = 1; y <= 5; y++){
            printf("%c ",dis);
            dis = dis + y;
        }
        dis = 'A'+x;
        printf("\n");
    }
    return 0;
}

// ตัวอักษรกลางกล่องคือ F
// มีตัว D ทั้งหมด 3 ตัว


// A B D G K 
// B C E H L
// C D F I M
// D E G J N
// E F H K O