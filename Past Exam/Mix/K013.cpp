#include <iostream>
using namespace std;

int main(){
    int n, l, w;
    cin >> n >> l >> w;

    char c = 'A';
    int r = 0;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < l; j++){
            if(r>25) r = 0;
            if(r >= n) r = 0;
            char C = c+r;
            cout << C;
            r++;
        }
        r--;
        cout << "\n";
    }

    return 0;
}