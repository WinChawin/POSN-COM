#include <iostream>
using namespace std;

int multiply(int a, int b=2){
    return a * b;
}
int main(){
    int x, y;
    cin >> x >> y;
    cout << multiply(x) << endl; // b จะใช้ค่า default คือ 2
    cout << multiply(x, y) << endl; // b จะใช้ค่า y ที่ส่งมาแทน
    return 0;
}