#include <stdio.h>
#include <string.h>

int main(){
    char str[100], num[2];
    gets(str);
    scanf("%s", num);

    int n = strlen(str);
    char s[100];
    int r = 0, j = 0;
    for(int i = 0; i < n; i++){
        if(str[r] != ' ') s[j++] = str[r++];
        else{
            s[j++] = num[0];
            r++; 
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < n; j++){
            if(j%8 == i){
                printf("%c", s[j]);
            }
        }
    }

    return 0;
}