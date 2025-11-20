#include <stdio.h>

int main(){
    int A, B, C, a, b, c, d;
    scanf("%d %d %d", &A, &B, &C);

    int found = 0;     
    int ansA, ansB, ansC, ansD; 

    for(a = 1; a <= A; a++){      
        if(A % a != 0) continue;
        c = A / a;               

        for(b = -100; b <= 100; b++){
            if(b == 0 && C != 0) continue;
            if(b != 0 && C % b != 0) continue;

            d = (b == 0) ? 0 : C / b;  

            if(a * d + b * c == B){   
                if(!found || a < ansA || (a == ansA && b < ansB)){
                    found = 1;
                    ansA = a; ansB = b; ansC = c; ansD = d;
                }
            }
        }
    }

    if(found) printf("%d %d %d %d", ansA, ansB, ansC, ansD);
    else printf("No Solution");

    return 0;
}
