#include <iostream>
using namespace std;

int main(){
    int a = 5;      // 0101
    int b = 3;      // 0011

    // bitwise and      เอาเฉพาะ ตำแหน่งที่เป็น 1 ทั้งคู่
    cout << (a & b) << "\n";   // and  0001 = 1
    // bitwise or       เป็น 1 ตำแหน่งที่เป็น 1 อย่างน้อย 1 ตัว
    cout << (a | b) << "\n";   // or   0111 = 7
    // bitwise xor      ตำแหน่งที่เหมือนกันเป็น 0 ตำแหน่งที่ต่างกันเป็น 1 - ค่าความจริงต่าง xor กันได้ 1
    cout << (a ^ b) << "\n";   // xor  0110 = 6
    // bitwise not      กลับ bit ทุกตำแหน่ง 0 เป็น 1, 1 เป็น 0
    cout << (~a) << "\n";      // not  1010 = -6

    // left shift       เลื่อน bit ไปทางซ้าย n ตำแหน่ง
    cout << (a << 1) << "\n";  // left shift 1010 = 10
    // right shift      เลื่อน bit ไปทางขวา n ตำแหน่ง
    cout << (a >> 1) << "\n";  // right shift 0001 = 2
    // คูณ 2 ยกกำลัง 10
    cout << (a << 10) << "\n";  // left shift 0101 0000 0000 0000 = 5120

    return 0;
}