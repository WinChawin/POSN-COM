#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int bd[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &bd[i]);
    }

    int target, yes = 0;
    scanf("%d", &target);

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(bd[i]+bd[j] == target){
                printf("%d %d\n", bd[i], bd[j]);
                yes++;
            }
        }
    }
    if(yes == 0) printf("No");

    return 0;
}