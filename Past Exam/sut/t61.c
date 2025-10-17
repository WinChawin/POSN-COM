#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int N = (2*n)+1;

    for(int l = 0; l < n; l++){
        for(int i = 0; i < N; i++){
            for(int k = 0; k < n; k++){
                for(int j = 0; j < N; j++){
                    if(i-j == 0 || i+j == N-1 || i == (N-1)/2 || j == (N-1)/2){
                        if((i-j == 0 && l-k == 0) || (i+j == N-1  &&  l+k == n-1)){
                            printf("#");
                        }
                        else{
                            printf("+"); 
                        }
                    }
                    else if(i+j >= (N-1)/2 && i+j <= 3*(N-1)/2 && j-i <= (N-1)/2 && i-j <= (N-1)/2 ){
                        printf("*");
                    }
                    else{
                        printf(".");
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}
