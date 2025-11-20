#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n (max 10): "; 
    cin >> n;
    int arr[11] = {};
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[x]++;
    }
    for (int i = 0; i < 11; i++){
        if (arr[i] > 0){
            cout << i << " appears " << arr[i] << " time(s)" << endl;
        }
    }
    for (int i = 0; i < 11; i++){
        cout << arr[i] << " ";
    }
}