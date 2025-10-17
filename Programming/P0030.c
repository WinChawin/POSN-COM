#include <stdio.h>
#include <string.h>

int main(){
    char n[10000005];
    scanf("%s", &n);

    int r3 = 0, r11 = 0, len = strlen(n);
    for(int i = 0; i < len; i++){
        int digit = n[i]-'0';
        r3 = (r3 * 10 + digit) % 3;
        r11 = (r11 * 10 + digit) % 11;
    }

    printf("%d %d", r3, r11);

    return 0;
}