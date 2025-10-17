#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, -3, -6, -1, 7, -4, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int x, ans = 0, size = sizeof(arr)/sizeof(arr[0]);
    cin >> x;

    for (int i = 0; i < size-1; i++){
        int target = x - arr[i];
        for (int j = i+1; j < size; j++){
            if (arr[j] == target){
                ans++;
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
                break;
            }
        }
    }
    cout << "Total pairs: " << ans << endl;

    return 0;
}