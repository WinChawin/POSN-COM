#include <stdio.h>

int main(){
    int k=7;
    for (int i = 0; i < k; i++){
        for (int j = 0; j<= i; j++){
            if (j==0||i==k-1||j==i){
                printf("x ");
            }
            else{
                printf("- ");
            }
        }
        printf("\n");
    }

    return 0;
}

// x 
// x x
// x - x
// x - - x
// x - - - x
// x - - - - x
// x x x x x x x
