#include <stdio.h>
#include <string.h>

int main(){
    char str[20], sub[20];
    gets(str);
    scanf("%s", sub);

    int found = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == sub[0]){
            for(int j = 0; sub[j] != '\0'; j++){
                if(sub[j] == str[i+j]) found = 1;
                else{
                    found = 0;
                    break;
                } 
             
            }

            if(found){
                printf("%d", i+1);
                return 0;
            }
        }
    
    }

    printf("-1");

    return 0;
}