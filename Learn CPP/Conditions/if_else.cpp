#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a > b){
        cout << "a is greater than b";
    }
    else if (a < b){
        cout << "a is less than b";
    }
    else{
        cout << "a is equal to b";
    }
    
    if (a!=b){
        cout << "\na is not equal to b";
    }
    else if (a == b) cout << "\na = b";       // เขียนแบบนี้ได้ แต่ไม่ควรเขียนแบบนี้ เพราะจะทำให้โค้ดอ่านยาก

    return 0;
}