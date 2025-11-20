#include <stdio.h>
#include <string.h>

int main(){
    char str1[21], str2[21];
    scanf("%s %s", &str1, &str2);
    
    int found[123] = {0};
    for(int i = 0; i < strlen(str1); i++){
        for(int j = 0; j < strlen(str2); j++){
            if(str1[i] == str2[j] && !found[(unsigned char)str1[i]]){
                printf("%c ", str1[i]);
                found[str1[i]] = 1;
                break; 
            }
        }
    }

    return 0;
}