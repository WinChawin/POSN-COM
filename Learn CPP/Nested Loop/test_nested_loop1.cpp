#include <iostream>
using namespace std;

// sol1 - Find pairs in an array that sum to a given value x

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int x, count = 0, size = sizeof(arr)/sizeof(arr[0]);
    cin >> x;

    for (int i = 0; i < size-1; i++){
        for (int j = i+1; j < size; j++){
            if (arr[i] + arr[j] == x){
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
                count++;
            }
        }
    }

    cout << "Total pairs: " << count << endl;

    return 0;
}