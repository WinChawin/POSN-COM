#include <stdio.h>

int main(){
    int w = 0, r = 0, car[10000] = {}, n, i = 0;
    while(1){
        scanf("%d", &w);
        
        if(w < 0) break;

        w += r;
        n = 0;

        if(w >= 500){
            n = w/800;
            r = w%800;
            if(r >= 500){
                r = 0;
                n++;
            }  
        }  
        else{
            r = w;
            n = 0;
        }

        car[i++] = n;
    }

    for(int j = 0; j < i; j++){
        printf("%d\n", car[j]);
    }

    return 0;
}