#include <stdio.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int k, x, y, n;
    int pos = 0, neg = 0, even = 0, odd = 0;
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        scanf("%d %d", &x, &y);

        if((x > row) || (x < 1) || (y < 1) || (y > col)) ;
        else {
            n = arr[x-1][y-1];
            if(n%2 == 0) even++;
            else odd++;

            if(n>0) pos++;
            if(n<0) neg++;
        }
    }
    
    printf("%d %d %d %d", pos, neg, even, odd);


    return 0;
}