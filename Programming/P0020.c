#include <stdio.h>

int main(){
    int score[5][4] = {};

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &score[i][j]);
        }
    }

    int max = 0, who = 0;
    for(int i = 0; i < 5; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            sum += score[i][j];
        }
        if(sum > max) {
            max = sum;
            who = i+1;
        }
    }

    printf("%d %d", who, max);

    return 0;
}