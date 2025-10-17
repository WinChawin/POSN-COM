#include <iostream>
using namespace std;

int add(int a, int b){          // ขื่อเหมือนกัน ต่างที่ data type โปรแกรมจะเลือกให้เหมาะสมเอง
    return a + b;
}

double add(double a, double b){
    return a + b;
}

int main(){
    int x, y;
    double p, q;
    cin >> x >> y >> p >> q;                        // 1 2 3.5 4.5
    cout << "int add: " << add(x, y) << endl;       // int add: 3
    cout << "double add: " << add(p, q) << endl;    // double add: 8
    return 0;
}