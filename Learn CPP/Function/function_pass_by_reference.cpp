#include <iostream>
using namespace std;

void increment(int &n){                                 // pass by reference ตัวแปร& - นอกฟังก์ชันจะเปลี่ยนตามค่าที่ส่งเข้าไป
    n++;
    cout << "Inside function: " << n << endl;
}

int main(){
    int num ;
    cin >> num;                                        // Input: 5
    increment(num);
    cout << "outside function: " << num << endl;
    return 0;
}