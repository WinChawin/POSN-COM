#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, sub;
    cin >> str >> sub;          // chawin win
    size_t pos = str.find(sub);
    if (pos != string::npos){
        cout << "Found at index: " << pos << endl;  // Found at index: 3
    }
    else{
        cout << "Not Found" << endl;
    }
}