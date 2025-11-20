#include <iostream>
using namespace std;

// Sequential Search Algorithm, linear search
// Time Complexity: O(n)

int main(){
    int n, key;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> key; // element to be searched
    
    bool found = false;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            found = true;
            cout << "Found at index: " << i << endl;
            break;
        }
    }
    if(!found){
        cout << "Not Found" << endl;
    }
}