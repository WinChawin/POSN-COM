#include <iostream>
using namespace std;


// เรียกตัวเอง (Recursion)
void countdown(int n){
    if (n < 0) return; // base case, terminated case
    cout << n << " ";
    countdown(n - 1); // recursive case
}

int main(){
    int num;
    cin >> num;
    countdown(num);
    return 0;
}