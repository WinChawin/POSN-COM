#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;                     // chawin
    transform(str.begin(), str.end(), str.begin(), ::toupper);   // toupper
    cout << str << endl;            // CHAWIN

    return 0;
}