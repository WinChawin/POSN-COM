#include <stdio.h>

int main(){
    char str[50], sub[50];
    gets(str);
    scanf("%s", sub);

    int cnt = 0;

    for(int i = 0; str[i] != '\0'; i++){
        int found = 0;
        if(str[i] == sub[0]){
            for(int j = 0; sub[j] != '\0'; j++){
                if(str[i+j] == sub[j]) found = 1;
                else{
                    found = 0;
                    break;
                }
            }

            if(found) cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}