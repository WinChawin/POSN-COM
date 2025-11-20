#include <iostream>
using namespace std;

// size_of - ขนาดของตัวแปร (หน่วยเป็น bytes)

int main(){
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "bool: " << sizeof(bool) << " bytes" << endl;
    return 0;
}

// 1 bytes = 8 bits
