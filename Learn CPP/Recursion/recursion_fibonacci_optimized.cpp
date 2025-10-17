#include <iostream>
using namespace std;

int fibonacci(int n){               // Optimized Iterative Approach
    if (n <= 1) return n;           // Base cases
    int a = 0, b = 1, c;            // F(0) = 0, F(1) = 1
    for (int i = 2; i <= n; i++){   // Iteratively compute F(n)
        c = a + b;                  // F(n) = F(n-1) + F(n-2)
        a = b;                      // Update F(n-1)
        b = c;                      // Update F(n-2)
    }
    return b;
}

int main(){
    int num;                    // จำนวนลำดับที่ต้องการหา
    cin >> num;
    cout << fibonacci(num);
    return 0;
}