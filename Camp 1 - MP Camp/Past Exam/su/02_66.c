#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            int x;
            scanf("%d", &x);
            arr[i][j] = x;
            arr[j][i] = x; 
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}