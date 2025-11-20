#include <iostream>
using namespace std;

// ข้อความ - เอา char หลายตัวมาต่อกัน

int main(){
    string name;                // ยังไม่มีค่า
    string fullname;
    string school = "spsm";     // มีค่า
    // cout << name << endl;
    // cout << school;
    cin >> name ;            // รับข้อความที่ไม่มีช่องว่าง
    cin.ignore();            // ลบ newline ที่เหลือใน buffer
    getline(cin, fullname);     // รับข้อความที่มีช่องว่าง
    cout << name + " ";
    cout << fullname << endl;
    cout << school;
    return 0;
}