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

    for(int i = 0; i<3; i++){
        if(d[i]-'0' > 6){
            printf("error");
            return 0;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int n = d[j] - '0';  
            printf("%s", dice[n-1][i]);
            if(j<2) printf("|");
        }
        printf("\n");
    }

    return 0;
}