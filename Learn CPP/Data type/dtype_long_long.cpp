#include <iostream>
using namespace std;

// long long - จำนวนเต็ม (ขนาดใหญ่) 

int main(){
    long long bigNum = 9223372036854775807; // 2^63 - 1 ---> บวก ลบ
    unsigned long long veryBigNum = 18446744073709551615U; // 2^64 - 1 ---> บวกอย่างเดียว
    cout << bigNum << endl;
    cout << veryBigNum << endl;
    return 0;
}

// -9,223,372,036,854,775,808 ถึง 9,223,372,036,854,775,807 (8 bytes) ---> -2^63 ถึง 2^63 - 1