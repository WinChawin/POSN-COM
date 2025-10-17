#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int num;                    // จำนวนลำดับที่ต้องการหา     ex. 7 --> 13
    cin >> num;
    cout << fibonacci(num);
    return 0;
} 

// 0, 1, 1, 2, 3, 5, 8, 13, 21, ...., (n-2) + (n-1) = n