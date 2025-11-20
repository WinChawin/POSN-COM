#include <stdio.h>
#include <string.h>

int main(){
    char str1[10001];
    int f1[8] = { };
    char str2[10001];
    int f2[8] = { };

    scanf("%s %s", str1, str2);

    for(int i = 0; i < strlen(str1); i++){
        f1[str1[i] - 'A']++;
    }
    for(int i = 0; i < strlen(str2); i++){
        f2[str2[i] - 'A']++;
    }

    for(int i = 0; i < 8; i++){
        printf("%d ", f1[i]);
    }
    printf("\n");
    for(int i = 0; i < 8; i++){
        printf("%d ", f2[i]);
    }
    printf("\n");

    int cnt = 0;
    for(int i = 0; i < 8; i++){
        int dif = abs(f1[i]-f2[i]);
        printf("%d ", dif);
        cnt += dif;
    }
    printf("\n");

    if(cnt <= 3) printf("anagram");
    else printf("no");

    return 0;
}