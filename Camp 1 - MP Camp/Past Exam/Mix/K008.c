#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%s", s);

    char t = ' ';
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != t){
            printf("%c", s[i]);
            t = s[i];
        }
        else t = s[i]; 
    }

    return 0;
}