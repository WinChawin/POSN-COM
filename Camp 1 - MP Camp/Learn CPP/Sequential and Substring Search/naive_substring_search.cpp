#include <iostream>
using namespace std;

int main(){ 
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);      // substring to be searched

    int t_len = text.length();
    int p_len = pattern.length();
    bool found = false;

    // for (int i = 0; i <= t_len - p_len; i++){
    //     bool match = true;
    //     for (int j = 0; j < p_len; j++){
    //         if (text[i + j] != pattern[j]){
    //             match = false;
    //             break;
    //         }
    //     }
    //     if (match) {
    //         found = true;
    //         cout << "Pattern found at index: " << i << endl;
    //     }
    // }
    // if (!found) {
    //     cout << "Pattern not found" << endl;
    // }

    for (int i = 0; i <= t_len - p_len; i++){
        bool match = true;
        if (text[i] == pattern[0]){ // first character match
            for (int j = 1; j < p_len; j++){
                if (text[i + j] != pattern[j]){
                    match = false;
                    break;
                }
            }
            if (match) {
                found = true;
                cout << "Pattern found at index: " << i << endl;
            }
        }
    }
    if (!found) {
        cout << "Pattern not found" << endl;
    }

    return 0;
}