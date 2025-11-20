#include <iostream>
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == s) {
            cout << i+1;
            return 0;
        }
    }

    cout << -1;
    
    return 0;
}