#include <iostream>
using namespace std;

int main(){
    auto add = [](int a, int b) {
        return a + b;
    };
    int x, y;
    cin >> x >> y;
    cout << "lambda add: " << add(x, y) << endl;
    return 0;
}
        
// lambda function
// ฟังก์ชันนิรนาม
// [](){};