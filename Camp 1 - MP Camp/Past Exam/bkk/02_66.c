#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char hex[5];
    int dec = 0;

    scanf("%s", hex);

    for(int i = 0; i < strlen(hex); i++){
        if(isdigit(hex[i])) dec = dec*16 + (hex[i]-'0');
        else dec = dec*16 + (10 + (hex[i] - 'A'));
    }

    int b = dec, o = dec;
    
    int bin[70000];
    int oct[70000];
    int r= 0, s = 0;
    while(b > 0){
        bin[r++] = b % 2;
        b/=2;
    }
    while(o > 0){
        oct[s++] = o % 8;
        o/=8;
    }

    for(int j = r-1; j >= 0; j--){
        printf("%d", bin[j]);
    }
    printf("\n");
    for(int j = s-1; j >= 0; j--){
        printf("%d", oct[j]);
    }

    return 0;
}
