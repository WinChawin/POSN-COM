#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int r[n];
    int max = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        r[i] = x;

        if(x > max) max = x;
    }

    for(int i = 0; i < max; i++){ // สูง
        for(int j = 0; j < n; j++){ // ลูก
            int h = r[j];
            for(int k = 0; k < 2*r[j]; k++){ // grid
                if (i < max - h) {
                    cout << " ";
                } else {
                    int t = i - (max - h);   // ระดับภายในภูเขา: 0..h-1 (0 = ยอด)
                    if(k == (h - 1 - t)) {
                        cout << "/";
                    }
                    else if(k == (h + t)){
                        cout << "\\";
                    }
                    else{
                        cout << " ";
                    }
                }
            } 
        }
        cout << "\n";
    }

    return 0;
}