#include <iostream>
using namespace std;

int main(){
    string s;
    int l, w;

    cin >> s >> l >> w;

    int r = 0;
    for(int i = 0; i < w; i++){
        int k = 0;
        for(int j = 0; j < l; j++){
            
            cout << s[(k+r)%s.length()];
            k++;
        }
        r++;
        cout << "\n";
    }

    return 0;
}