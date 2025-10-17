#include <stdio.h>
#include <string.h>

int main(){
    char str[51];
    scanf("%s", str);

    int cup[] = {1, 0, 0};

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'A'){
            int temp = cup[0];
            cup[0] = cup[1];
            cup[1] = temp;
        }
        if(str[i] == 'B'){
            int temp = cup[1];
            cup[1] = cup[2];
            cup[2] = temp;
        }
        if(str[i] == 'C'){
            int temp = cup[0];
            cup[0] = cup[2];
            cup[2] = temp;
        }
    }

    for(int i = 0; i < 3; i++){
        if(cup[i] == 1) printf("%d", i+1);
    }

    return 0;
}