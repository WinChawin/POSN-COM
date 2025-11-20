#include <stdio.h>

char arr[8][9];

void print(){
    for(int i = 0; i < 8; i++){
        printf("%s\n", arr[i]);
    }
    printf("\n");
}

void right(int a, int b, char c){
    arr[a][b] = c;

    // print();

    int pos = -1;
    for(int i = b+1; i < 8; i++){
        if(arr[a][i] == '_') break;

        if(arr[a][i] == c){
            pos = i;
            break;
        }
    }
    // printf("%d", pos);
    if(pos != -1){
        for(int i = b+1; i < pos; i++){
            arr[a][i] = c;
        }
    }
}

int main(){
    for(int i = 0; i < 8; i++){
        scanf("%s", arr[i]);
    }

    int a, b;
    scanf("%d %d", &a, &b);

    right(a, b, 'B');

    scanf("%d %d", &a, &b);
    right(a, b, 'W');
    print();

    return 0;
}