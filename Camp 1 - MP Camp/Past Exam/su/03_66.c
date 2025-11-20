#include <stdio.h>
#include <string.h> 

int fac(int n){
    if(n == 1 || n == 0) return 1;
    return n*fac(n-1);
}

int main(){
    int n;
    scanf("%d", &n);

    char s[13];
    scanf("%s", s);

    int used[26] = {0};
    int before = 0;

    for(int i = 0; i < strlen(s); i++){
        int smaller = 0;
        for(char c = 'A'; c < s[i]; c++){
            if(c < 'A'+n && !used[c - 'A']){
                smaller++;
            }
        }
        before += smaller*fac(strlen(s) - i - 1);
        used[s[i]-'A'] = 1;
    }
    printf("%d", before+1);

    return 0;
}