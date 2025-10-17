#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;                     // Chawin
    transform(str.begin(), str.end(), str.begin(), ::tolower);   // tolower
    cout << str << endl;            // chawin

    return 0;
}