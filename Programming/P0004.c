#include <stdio.h>
#include <string.h>

int main(){
    char str[10001];
    scanf("%s", str);

    int capital = 0;
    int small = 0;
    for(int i = 0; i < strlen(str); i++){
        if (str[i]-'A' <= 25) capital++;
        else small++;
    }

    if((capital > 0) && (small > 0)) printf("Mix");
    else if(capital > 0) printf("All Capital Letter");
    else printf("All Small Letter");

    return 0;
}