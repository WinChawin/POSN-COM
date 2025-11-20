#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for (int i = 0; i < n -1; i++){             // outer loop
        for (int j = 0; j < n - i - 1; j++){    // inner loop
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin >> n; 

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubbleSort(arr);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}