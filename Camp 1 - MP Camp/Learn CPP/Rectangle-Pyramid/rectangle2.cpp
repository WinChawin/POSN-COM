#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n; col++){
            if ((row == col) || (col == n - (row -1))){         // (col == n - (row -1)) ----> (row + col == n+1)
                cout << "x";
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}


// 7
// x*****x
// *x***x*
// **x*x**
// ***x***
// **x*x**
// *x***x*
// x*****x