#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[10001] = {};

    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        arr[x]++;
    }

    int max = 0;
    for(int i = 0; i < 10001; i++){
        if(arr[i] > max) max = arr[i];
    }

    for(int i = 0; i < 10001; i++){
        if(arr[i] == max){
            printf("%d ", i);
        }
    }

    return 0;
}