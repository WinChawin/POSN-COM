#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n-i; j++){
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++){
            cout << j%2;
        }
        cout << endl;
    }

    return 0;
}



// 5
//     1
//    101
//   10101
//  1010101
// 101010101