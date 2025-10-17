#include <iostream>
using namespace std;

int factorial(int n){                       // recursive function ฟังก์ชันที่เรียกตัวเอง
    if(n <= 1){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int num;
    cin >> num;                    // Input: 5
    cout << factorial(num) << endl; // Output: 120
    return 0;
}