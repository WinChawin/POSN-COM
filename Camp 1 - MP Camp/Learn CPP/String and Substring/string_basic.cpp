#include <iostream>
using namespace std;

int main(){
    string s = "Chawin";
    cout << s[0] << endl;       // c
    cout << s[0] + s[1] << endl;        // 203 - ascii
    s += " Sumitra";
    cout << s << endl;      // chawin sumitra
    string aka = string(1,s[0]) + string(1,s[7]);        // CS
    cout << aka;

    return 0;
}