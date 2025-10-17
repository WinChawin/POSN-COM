#include <stdio.h>

int main(void){
    int x, y, m;
    char ch1 = 'A';
    for (y=0; y<=5; y++){
        for(x=0;x<=5; x++){
            printf("%c ", ch1++);
        }
        printf("\n");
        ch1 = 'B'+x+y;
        m = (x+y)%23;
    }
    return 0;
}


// A B C D E F 
// H I J K L M
// I J K L M N
// J K L M N O
// K L M N O P
// L M N O P Q