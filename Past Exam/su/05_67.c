#include <stdio.h>

char arr[100][100];
int n;

void print(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = '_';
        }
    }

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(b<d){
        for(int i = b+1; i < d-1; i++){
            arr[a][i] = '>';
        }
    }

    print();

    return 0;
}