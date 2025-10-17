#include <stdio.h>

int main(){
    int x, c = 2;
    char ch = 'a';
    char* ptr = NULL;
    while(c<36){
        if(c%2==0){
            ch++;       // เพิ่มค่าใน ascii 
        }
        c*=2;
    }
    ptr = &ch;
    printf("%c", *ptr);

    return 0;
}

// f