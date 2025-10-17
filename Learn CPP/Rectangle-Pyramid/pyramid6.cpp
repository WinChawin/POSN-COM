#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n - i; j++){
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}


// 5
//     1
//    123
//   12345
//  1234567
// 123456789