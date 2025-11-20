#include <stdio.h>
#include <string.h>

int main(){
    char num[13];
    scanf("%s", num);

    int sum = 0;
    for(int i = 0; i < strlen(num); i++){
        sum += num[i] - '0';
    }
 
    printf("%d", sum);
    return 0;
}