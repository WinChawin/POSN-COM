#include <stdio.h>

int main(){
    int k = 4;
    int s = 0, h = 2;
    while (k--){
        s+=h;
        h--;
        ++s;
        s=s-s+1;
    }
    printf("%d", s+k-2+1+h);
    return 0;
}

// -3