#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        for(int j = 0; j < n-i; j++){
            printf(" ");
        }
        for(int j = 0; j < (2*i)-1; j++){
            if((j == 0) || (j == (2*i)-2)) printf("%c", 'A'+i-1);
            else printf(" ");
        }
        for(int j = 0; j < n-i; j++){
            printf(" ");
        }

        printf(" ");
        
        for(int j = 0; j < n-i; j++){
            printf(" ");
        }
        for(int j = 0; j < (2*i)-1; j++){
            if((j == 0) || (j == (2*i)-2)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    for(int i = 2; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            printf(" ");
        }
        for(int j = 0; j < (2*i)-1; j++){
            if((j == 0) || (j == (2*i)-2)) printf("%c", 'A'+i-1);
            else printf(" ");
        }
        for(int j = 0; j < n-i; j++){
            printf(" ");
        }

        printf(" ");
        
        for(int j = 0; j < n-i; j++){
            printf(" ");
        }
        for(int j = 0; j < (2*i)-1; j++){
            if((j == 0) || (j == (2*i)-2)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}