#include <iostream>
#include <limits>
using namespace std;

// int - จำนวนเต็ม

int main(){
    int x = 25;
    cout << x << endl;
    x = 0x15; // hexadecimal 5*(16^0) + 1*(16^1) = 5 + 16 = 21
    cout << x << endl;

    cout << "int min: " << numeric_limits<int>::min() << endl;
    cout << "int max: " << numeric_limits<int>::max() << endl;
    cout << "unsigned int max: " << numeric_limits<unsigned int>::max() << endl;
    return 0;
}

// -2,147,483,648 ถึง 2,147,483,647 (4 bytes) ---> -2^31 ถึง 2^31 - 1
