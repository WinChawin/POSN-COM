#include <stdio.h>
#include <string.h>

int main(){
    char a[101], b[101], op;
    scanf("%s  %c %s", a, &op, b);
    
    if (strlen(a) < strlen(b)) {
        char tmp[101];
        strcpy(tmp, a);
        strcpy(a, b);
        strcpy(b, tmp);
    }

    int lena = strlen(a);
    int lenb = strlen(b);

    if (op == '*') {
        putchar('1');
        for (int i = 0; i < lena + lenb - 2; i++) putchar('0');
        putchar('\n');
    } 
    else if (op == '+') {
        if (lena == lenb) {
            putchar('2');
            for (int i = 0; i < lena - 1; i++) putchar('0');
            putchar('\n');
        } else {
            putchar('1');
            for (int i = 0; i < lena - lenb - 1; i++) putchar('0');
            putchar('1');
            for (int i = 0; i < lenb - 1; i++) putchar('0');
            putchar('\n');
        }
    }
    return 0;
}