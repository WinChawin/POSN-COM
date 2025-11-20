#include <iostream>
using namespace std;

// Original Array
//                  | 10 | 7 | 22 | 2 | 13 | 15 | 6 |

// Prefix Sum Array
//              | 0 | 10 | 17 | 39 | 41 | 54 | 69 | 75 |

int main(){
    int ps[100];
    int n;
    cin >> n;
    ps[0] = 0; // Prefix sum at index 0 is always 0
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        ps[i] = ps[i - 1] + x; // Prefix sum calculation
    }

    //print prefix sum array
    for (int i = 0; i <= n; i++){
        cout << ps[i] << " " ;
    }
    cout << endl;

    int left, right;
    cin >> left >> right;
    cout << ps[right] - ps[left - 1]; // Sum from index left to right
}