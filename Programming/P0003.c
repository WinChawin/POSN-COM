#include <stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);

    int M1[100][100] = {};
    int M2[100][100] = {};

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &M1[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &M2[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", M1[i][j]+M2[i][j]);
        }
        printf("\n");
    }

    return 0;
}