#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i <= 10; i++){
        for(int j = 0; j < n; j++){
            if(i >= 10-arr[j] && i != 10){
                cout << "* ";
            } 
            else cout << "  ";
        }
        cout << "\n";
    }
    

    return 0;
}