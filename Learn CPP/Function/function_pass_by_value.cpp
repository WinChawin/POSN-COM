#include <iostream>
using namespace std;

void increment(int n){                                 // pass by value นอกฟังก์ชันตัวแปรจะไม่เปลี่ยน
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