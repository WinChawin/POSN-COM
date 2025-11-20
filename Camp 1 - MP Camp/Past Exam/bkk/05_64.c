#include <stdio.h>

int main(){
    char d[4];
    scanf("%s", d);

    char dice[6][3][4] = {
        {
            "   ",
            " * ",
            "   "
        },

        {
            "   ",
            "* *",
            "   "
        },

        {
            " * ",
            " * ",
            " * "
        },

        {
            "* *",
            "   ",
            "* *"
        },

        {
            "* *",
            " * ",
            "* *"
        },

        {
            "* *",
            "* *",
            "* *"
        },
    };

    for(int i = 0; i < 3; i++){
        if(d[i]-'0'>6){
          printf("ERROR"); 
          return 0; 
        } 
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%s", dice[d[j]-'0'-1][i]);
            if(j < 2) printf("|");
        }
        printf("\n");
    }

    return 0;
}