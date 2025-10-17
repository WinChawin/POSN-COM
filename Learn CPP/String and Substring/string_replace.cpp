#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, old_sub, new_sub;
    cin >> str >> old_sub >> new_sub;      // chawin win WIN
    size_t pos = str.find(old_sub);
    if (pos != string::npos){
        str.replace(pos, old_sub.length(), new_sub); // replace(index, length, new_substring)
        cout << str << endl;                // chawin WIN
    }
    else{
        cout << "Not Found" << endl;
    }
}