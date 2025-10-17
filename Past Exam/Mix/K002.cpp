#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    int vowel[5] = {};

    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a') vowel[0]++;
        if(str[i] == 'e') vowel[1]++;
        if(str[i] == 'i') vowel[2]++;
        if(str[i] == 'o') vowel[3]++;
        if(str[i] == 'u') vowel[4]++;
    }

    for(int i = 0; i < 5; i++){
        cout << vowel[i] << " ";
    }

    return 0;
}