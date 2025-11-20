#include <stdio.h>

int main(){
    char name[20];
    int gender, age, marry;
    gets(name);
    scanf("%d %d %d", &gender, &age, &marry);

    char title[4][7] = {"Miss", "Master", "Mr.", "Mrs."};

    if(gender){ //ชาย
        if(age < 15){ 
            printf("%s %s", title[1], name);
        }
        else{
            printf("%s %s", title[2], name);
        }
    }
    else{
        if(age < 15){ 
            printf("%s %s", title[0], name);
        }
        else{
            if(marry){
                printf("%s %s", title[3], name);
            }
            else{
                printf("%s %s", title[0], name);
            }
        }
    }

    return 0;
}