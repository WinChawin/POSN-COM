#include <iostream>
using namespace std;

int main(){ 
    int n;
    cin >> n;

    int arr[n];

    int max = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x; 
        arr[i] = x; 

        if(x > max) max = x;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*arr[i]; j++){
            for(int k = 0; k < max; k++){
                if(k >= max-arr[i] && k+j == max-1) cout << "/" ;
                else if(k >= max-arr[i] && j-k == 2*arr[i]-max) cout << "\\";
                else cout << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}