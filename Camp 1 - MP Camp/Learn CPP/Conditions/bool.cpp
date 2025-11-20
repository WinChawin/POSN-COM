#include <iostream>
using namespace std;

int main(){
    bool check = true;
    if (check){
        cout << "True\n";
    }
    else{
        cout << "False\n";
    }

    // ternary operator
    cout << "Check is " << (check ? "True\n" : "False\n");
    
    int a = 10, b = 20;
    cout << "Max is " << (a > b ? a : b) << "\n";
    return 0;
}