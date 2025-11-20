#include <iostream>
#include <vector>
using namespace std;

vector<int> memo(100, -1); // Memoization array

int fibonacci_memo(int n) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n]; // Return cached result
    memo[n] = fibonacci_memo(n - 1) + fibonacci_memo(n - 2);
    return memo[n];
}

int main() {
    int num;
    cin >> num;
    cout << fibonacci_memo(num);
    return 0;
}