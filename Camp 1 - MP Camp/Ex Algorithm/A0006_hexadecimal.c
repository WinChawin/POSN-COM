#include <stdio.h>

int main(){
    int n, r = 0;
    scanf("%d", &n);

    int bin[100];

    while(n > 0){
        int hex = n%16;
        if(hex > 9){
            bin[r++] = hex + 55;
        }
        else{
            bin[r++] = hex;
        }
        n/=16;
    }

    for(int j = r-1; j >= 0; j--){
        if(bin[j] > 9){
            printf("%c", bin[j]); 
        }
        else{
            printf("%d", bin[j]);
        }
    }
    return 0;
}
