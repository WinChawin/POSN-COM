#include <iostream>
using namespace std;

long long fibo(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;

    long long a = 0, b = 1, next;
    for(int i = 2; i <= n; i++){
        next = a+b;
        a = b;
        b = next;
    }

    return b;
}

int main(){
    int n;
    cin >> n;

    for(int i = n-2; i <= n; i++){
        cout << fibo(i) << "\n";
    }

    return 0;
}