#include <stdio.h>

int main(){
    char n[4];
    scanf("%s", &n);

    char dice[7][3][5] = {
        {
            "    ",
            "    ",
            "___ "
        },
        {
            "    ",
            " *  ",
            "    "
        },
        {
            " *  ",
            "    ",
            " *  "
        },
        {
            "*   ",
            " *  ",
            "  * "
        },
        {
            "* * ",
            "    ",
            "* * "
        },
        {
            "* * ",
            " *  ",
            "* * "
        },
        {
            "* * ",
            "* * ",
            "* * "
        }
    };

    for (int row = 0; row < 3; row++) {
        for (int i = 0; i < 3; i++) {
            int d = n[i] - '0';
            if (d < 1 || d > 6) d = 0;
            printf("%s", dice[d][row]);
        }
        printf("\n"); 
    }
}
