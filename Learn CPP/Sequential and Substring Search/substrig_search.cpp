#include <iostream>
using namespace std;

int main(){
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern); // substring to be searched

    size_t pos = text.find(pattern);
    if (pos != string::npos) {
        cout << "Pattern found at index: " << pos << endl;
    } 
    else {
        cout << "Pattern not found" << endl;
    }

    return 0;
}