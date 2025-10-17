#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    char t = ' ';
    for(int i = 0; i < s.length(); i++){
        if(s[i] != t){
            cout << s[i];
            t = s[i];
        }
        else t = s[i];
    }

    return 0;
}