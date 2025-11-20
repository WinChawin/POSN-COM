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

    for(int i = 0; i < max; i++){ 
        for(int j = 0; j < n; j++){
            for(int k = 0; k < 2*r[j]; k++){ 
                if(i < r[j] && i == k){
                    cout << "\\";
                }
                else if(i < r[j] && i+k == (2*r[j])-1){
                    cout << "/";
                }
                else{
                    cout << " ";
                }
            } 
        }
        cout << "\n";
    }

    return 0;
}