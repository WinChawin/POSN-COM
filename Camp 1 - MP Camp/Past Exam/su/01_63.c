#include <stdio.h>
#include <string.h>

int main(){
    char str[10001];
    int f[8] = { };

    scanf("%s", str);

    for(int i = 0; i < strlen(str); i++){
        f[str[i] - 'A']++;
    }

    for(int i = 0; i < 8; i++){
        printf("%d ", f[i]);
    }

    return 0;
}