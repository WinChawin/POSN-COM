#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int max;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(i == 0 || arr[i] > max){
            max = arr[i];
        }
    }
    for(int i = 0; i < max; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < 2*arr[j]; k++){
                if(i < arr[j] && i == k){
                    printf("\\");
                }
                else if(i < arr[j] && i + k == (2*arr[j])-1){
                    printf("/");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
} 