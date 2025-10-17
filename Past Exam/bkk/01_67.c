#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", &str);

    int cnt[123] = {};

    for(int i = 0; i < strlen(str); i++){
        int ascii = str[i];
        cnt[ascii]++;
    }

    for(int i = 65; i <= 122; i++){
        if(cnt[i] > 0){
            printf("%c ", i);
        }
    }

    return 0;
}