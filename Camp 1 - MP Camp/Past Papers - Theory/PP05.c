#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char name[20] = "PixElmaTh EduCaTion";
    int s =  sizeof(name)/sizeof(name[0]);
    int k = 3, i = 0;
    char* ptr = NULL;

    if(--k > ++i){
        for (i = 0; i < s-k; i++){
            if (isupper(name[i])){
                k++;
                k += i*2;
            }
        }
        if (k < s){
            ptr = &name[k];
        }
        else{
            printf("k is out of bounds\n");
            return 1;
        }
    }
    if (ptr != NULL){
        printf("%s", ptr);
    }
    else{
        printf("Pointer not set\n");
    }
    return 0;
}

//k is out of bounds