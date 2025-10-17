#include <stdio.h>

int main(){
    char bar[14];
    scanf("%s", bar);

    int even = 0, odd = 0;
    for(int i = 0; i < 12; i++){
        if(i%2==1) even += bar[i]-'0';
        else odd += bar[i]-'0';
    }

    int sum = (even*3)+odd;

    if((sum + (bar[12]-'0'))%10==0) printf("YES");
    else printf("NO");

    return 0;
}