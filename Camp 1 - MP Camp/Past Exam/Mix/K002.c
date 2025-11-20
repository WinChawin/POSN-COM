#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    gets(str);

    int vowel[5] = {};
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a') vowel[0]++;
        if(str[i] == 'e') vowel[1]++;
        if(str[i] == 'i') vowel[2]++;
        if(str[i] == 'o') vowel[3]++;
        if(str[i] == 'u') vowel[4]++;
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", vowel[i]);
    }

    return 0;
}