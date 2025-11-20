#include <iostream>
#include <vector>
using namespace std;

int fibonacci_dp(int n){    // Dynamic Programming
    vector<int> dp(n+1, 0); // Create a DP array initialized to 0
    dp[1] = 1;              // Base case: F(1) = 1
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2]; // Fill the DP array
    }
    return dp[n];
}

int main(){
    int num;
    cin >> num;
    cout << fibonacci_dp(num);
    return 0;
}