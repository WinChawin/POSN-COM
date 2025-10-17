#include <stdio.h>

int main(){

    printf("Hello World\n");    // printf --> cout --> output
    printf("123\n");            // string
    printf("%d\n", 123);        // integer
    printf("%f\n", 123.456);    // float
    // printf(123);             // wrong
    int a = 5, b = 10;
    printf("Two numbers: %d and %d\n", a, b);               // int variable
    float pi = 3.14159;
    printf("Value of pi: %f\n", pi);
    printf("Value of pi(2 decimal places): %.2f\n", pi);    // float variable with 2 decimal places
    char ch = 'A';
    printf("Character: %c\n", ch);                          // char variable
    char str[] = "Hello";                                   // string with dynamic size
    char text[50] = "This is a long string";                // string with fixed size
    printf("String: %s\n", str);                            // string variable
    printf("Long String: %s\n", text);                      // long string variable

    int num;
    scanf("%d", &num);          // scanf --> cin --> input
    printf("You entered: %d\n", num);

    return 0;
}


// int - %d
// float - %f
// char - %c
// string - %s
// double - %lf
// long - %ld
// long long - %lld
