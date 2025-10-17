#include <stdio.h>

int main(){
    char card[17];
    scanf("%s", &card);

    int n, r = 0;
    for(int i = 0; i < 15; i++){ 
        if(i % 2 == 0) n = (card[i]-'0')*2;
        else n =  (card[i]-'0');
        // printf("%d ", n);

        if(n > 9){
            r += n%10;
            r += n/10;
        }
        else{
            r += n;
        }
    }
    // printf("%d", r);

    if((10-(r%10))%10 == (card[15]-'0')) printf("yes");
    
    else printf("no");

    return 0;
}