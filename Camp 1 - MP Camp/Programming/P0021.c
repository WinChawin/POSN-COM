#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    gets(str);

    for(int i = 0; i < strlen(str); i++){
        char p1 = str[i];
        char p2 = str[i+2];
        printf("%c", str[i]);
        if((p1==p2) && ((p1 == 'a') || (p1 == 'e') || (p1 == 'i') || (p1 == 'o') || (p1 == 'u'))){
            i+=2;
        }
    }

    return 0;
}