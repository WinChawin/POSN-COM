#include <stdio.h>
#include <string.h>

int main(){
    char str[21];
    scanf("%s", &str);

    int cnt[26] = {};

    for(int i = 0; i < strlen(str); i++){
        cnt[str[i]-'A']++;
    }

    for(int i = 0; i < 26; i++){
        if(cnt[i] == 1){
            printf("%c", 'A'+i);
            break;
        }
    }

    return 0;
}