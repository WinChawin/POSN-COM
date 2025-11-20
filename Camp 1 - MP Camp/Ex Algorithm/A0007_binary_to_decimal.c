#include <stdio.h>
#include <string.h>

int main(){
    char bin[100];
    int dec = 0;

    scanf("%s", bin);

    for(int i = 0; i < strlen(bin); i++){
        dec = dec*2 + (bin[i]-'0');
    }

    printf("%d", dec);

    return 0;
}