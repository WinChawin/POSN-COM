#include <iostream>
using namespace std;

int main(){
    int a = 2, b = 1;
    a++;
    cout << "a = " << a << "\n";   // 3
    a--;
    cout << "a = " << a << "\n";   // 2
    ++a;
    cout << "a = " << a << "\n";   // 3
    --a;
    cout << "a = " << a << "\n";   // 2
    a+=2;
    cout << "a = " << a << "\n";   // 4
    a-=2;
    cout << "a = " << a << "\n";   // 2
    a*=2;
    cout << "a = " << a << "\n";   // 4
    a/=2;
    cout << "a = " << a << "\n";   // 2

    b = 1;
    cout << "before " << b++ << ", after " << b << "\n";  // 1 ทำก่อนค่อยเพิ่ม
    b = 1;
    cout << "before " << ++b << ", after " << b << "\n";  // 2 เพิ่มก่อนค่อยทำ
    return 0;
}