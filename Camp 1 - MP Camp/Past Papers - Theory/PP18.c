#include <stdio.h>

int main(viod){
    int x,y,z,m;
    char ch1 = 'A';
    for(y = 0; y <= 5; y++){
        for(x = 0; x <= 5; x++){
            for(z = 0; z <= x; z++){
                printf(" ");
            }
            if(x>=y){
                printf("%c", ch1++);
            }
        }
        printf("\n");
        ch1 = 'B' + x + y;
        m = (x + y) % 23;
    }
    return 0;
}


//  A  B   C    D     E      F
//    H   I    J     K      L
//       I    J     K      L
//           J     K      L
//                K      L
//                      L