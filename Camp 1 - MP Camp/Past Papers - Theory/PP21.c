#include <stdio.h>

int A[10][10];

void show(int M[10][10]){
    int x, y;
    int sum = 0;
    for(x = 0; x < 10; x++){
        for(y = 0; y < 10; y++){
            if(y > x){
                sum = sum + M[y][x];
            }
        }
    }
    printf("Data = %d", sum);
}

int main(void){
    int x, y;
    for(y = 0; y < 10; y++){
        for(x = 0; x < 10; x++){
            A[y][x] = x + y;
        }
    }
    show(A);
    return 0;
}

// Data = 405


// 0  1  2  3  4  5  6  7  8  9
//  1  2  3  4  5  6  7  8  9 10
//  2  3  4  5  6  7  8  9 10 11
//  3  4  5  6  7  8  9 10 11 12
//  4  5  6  7  8  9 10 11 12 13
//  5  6  7  8  9 10 11 12 13 14
//  6  7  8  9 10 11 12 13 14 15
//  7  8  9 10 11 12 13 14 15 16
//  8  9 10 11 12 13 14 15 16 17
//  9 10 11 12 13 14 15 16 17 18