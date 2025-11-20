#include <stdio.h>
#include <string.h>
#include <ctype.h>

int toDecimal(char num[], int base){
    int power = 1;
    int value = 0;

    for(int i = strlen(num)-1; i>= 0; i--){
        int digit;
        if(isdigit(num[i])) digit = num[i]-'0';
        else digit = toupper(num[i]) - 'A' + 10;

        if (digit < 0 || digit >= base) return 0;

        value += digit*power;
        power *= base;
    }

    return value;
}

void fromDecimal(int num, int base, char result[]){
    if (num == 0) {       
        result[0] = '0';
        result[1] = '\0';
        return;
    }

    char temp[20];
    int i = 0;

    while(num > 0){
        int digit = num % base;
        if(digit < 10) temp[i++] = digit + '0';
        else temp[i++] = digit - 10 + 'A';
        num /= base;
    }

    for(int j = 0; j < i; j++){
        result[j] = temp[i - j - 1];
    }
    result[i] = '\0';
}

int main(){
    int base;
    scanf("%d", &base);

    char num1[20], num2[20];
    scanf("%s %s", num1, num2);

    int n1 = toDecimal(num1, base);
    int n2 = toDecimal(num2, base);
    int sum = n1+n2;

    char result[20];
    fromDecimal(sum, base, result);

    printf("%s", result);

    return 0;
}

