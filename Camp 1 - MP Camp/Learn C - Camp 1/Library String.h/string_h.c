#include <stdio.h>
#include <string.h>

int main(){
    // declaration
    char text1[50] = "Chawin";
    char text2[] = "Win";



    // function in string.h
    printf("Length of text1: %d\n", strlen(text1)); // length of text1
    char ref1[50];
    char ref2[50];
    strcpy(ref1, text1); // copy text1 to ref1
    printf("ref1: %s\n", ref1);

    strncpy(ref2, text1, 2); // copy first 2 characters of text1 to ref2
    printf("ref2: %s\n", ref2);

    strcat(text1, text2); // concatenate text2 to text1 เอาหลังไปต่อหน้า
    printf("text1 after strcat: %s\n", text1);

    // compare strings
    if (strcmp(text1, text2) == 0){ // compare text1 and text2
        printf("text1 is equal to text2\n");
    } 
    else {
        printf("text1 is not equal to text2\n");
    }

    char s1[] = "name", s2[] = "name";
    if (strcmp(s1, s2) == 0){ // compare s1 and s2 
        printf("s1 is equal to s2\n");
    } 
    else {
        printf("s1 is not equal to s2\n");
    }

    char str[] = "Hello, World!";
    char search = 'o';
    for(int i = 0; i < strlen(str); i++){   // search for character 'o' in str
        if (str[i] == search){
            printf("Found '%c' at index %d\n", search, i);
            break;
        }
    }
    char *ptr = strchr(str, search);        // find first occurrence of 'o' in str     หาได้แค่ index แรก
    if (ptr != NULL){
        printf("Found '%c' at index %ld using strchr\n", search, ptr - str);
    } else {
        printf("Character '%c' not found in string using strchr\n", search);
    }


    // substring search
    char text[] = "Hello, World, World!";
    char pattern[] = "World";
    char *substr = strstr(text, pattern); // find first occurrence of "World" in text
    if (substr != NULL){
        printf("Found \"%s\" at index %d using strstr\n", pattern, substr - text);
    } else {
        printf("Substring \"%s\" not found in string using strstr\n", pattern);
    }

    // split string
    char fruits[] = "apple,banana,cherry";
    char *token = strtok(fruits, ",");
    while (token != NULL) {
        printf("Found fruit: %s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}