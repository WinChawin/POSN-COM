#include <stdio.h>

char ch[] = {'K', 'M', 'I', 'T', 'L'};
int num[] = {9, 8, 3, 7, 2};
int x, y, z;
int main(void){
    for(x = 0; x <= 30; x++){
        for(y = 30; y > 0; y--){
            if(((x + y) % 7) == 6){
                if(y > x){
                    if((x % 5) == 0){
                        z = (x + y) % 5;
                        printf("%c %d\n", ch[z], num[z]);
                    }
                }
            }
        }
    }
    return 0;
}


// I 3
// K 9
// T 7
// M 8
// L 2
// I 3
// K 9
// T 7
// L 2
// I 3
// M 8
// L 2
// T 7
// M 8
// K 9
