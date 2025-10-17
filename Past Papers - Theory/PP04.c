#include <stdio.h>

int main(){
    int arr[] = {3, 6, 3, 6, 8, 3, 2, 4};
    int* ptr;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0])-3; i++){
        if(i == 0){
            ptr = &arr[i];
            *ptr = 2;
        }
        else if (arr[i]%2 == 0){
            ptr = &arr[i];
            *ptr = 2*i;
        }
    }
    printf("%d", arr[0] + *ptr);

    return 0;
}

// 10