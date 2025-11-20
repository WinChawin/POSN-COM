#include <stdio.h>

int main(){
    int k = 5, c = 2;
    int arr[] = {5, 8, 3, 6, 4, 2};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if (arr[i] % c == 0){
            printf("%d ", arr[i]);
            c++;
        }
    }

    return 0;
}

// 8 3 4