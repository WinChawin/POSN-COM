#include<stdio.h>
#include<string.h>

int main(){
    int N;
    scanf("%d",&N);
    char number[N][1001];
    for(int i=0 ; i<N ; i++){
        scanf("%s",&number[i]);
    }
    char temp;
    int count;
    for(int i=0 ; i<N ; i++){
        count = 0;
        int len = strlen(number[i]);
        for(int j=0 ; j<len ; j++){
            if(number[i][j]!='\0'){
                temp = number[i][j];
                count++;
            }
        }
        if((temp == '1' || temp == '2') && count == 1){
            printf("T");
        }
        else if(temp == '1' || temp == '3' || temp == '5' || temp == '7' || temp == '9'){
            printf("T");
        }
        else{
            printf("F");
        }
        printf("\n");
    }
    return 0;
}
