#include <stdio.h>
#include <string.h>

int main(){
    char s[] = "pixelmath";
    int c = 0;
    int k = 5;
    int size = strlen(s);

    for (int i = 1; i <= k;i++){
        for(int j = 1; j<=k;j++){
            printf("%c ", s[c]);
            c++;
            if(c >= size){
                c = 0;
            }
        }
        printf("\n");
    }

    return 0;
}

// p i x e l 
// m a t h p
// i x e l m
// a t h p i
// x e l m a