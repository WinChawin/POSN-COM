#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); // cin.tie(NULL); // cintie(nullptr);       // faster input
    cout.tie(0); // cout.tie(NULL); // couttie(nullptr);    // faster output

    int a = 10, b = 4, c;
    cout << "a = " << a << ", b = " << b << "\n";
    c = a + b;
    cout << "a + b = " << c << "\n";
    c = a - b;
    cout << "a - b = " << c << "\n";
    c = a * b;
    cout << "a * b = " << c << "\n";
    c = a / b;
    cout << "a / b = " << c << "\n";        // ปัดเศษทิ้ง
    c = a % b;
    cout << "a % b = " << c << "\n";        // mod หารเอาเศษ

    return 0;
}