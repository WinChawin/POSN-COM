#include <stdio.h>

int main(){
    int n;
    char c;
    scanf(" %c %d", &c, &n);

    int N = (2*n)+1;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i-j == 0 || i+j == N-1 || i == (N-1)/2 || j == (N-1)/2){
                printf("+");
            }
            else if(i+j >= (N-1)/2 && i+j <= 3*(N-1)/2 && j-i <= (N-1)/2 && i-j <= (N-1)/2 ){
                printf("%c", c);
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}