#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    while (true){
        int x;
        cout << "Enter a number (0 to stop): ";
        cin >> x;
        if (x != 0){
            sum += x;
        }
        else{
            break;
        }
    }
    cout << "Sum: " << sum << endl;

    cout << "\n---------" << endl;

    int i = 0;
    while (i < 5){
        cout << i << " ";
        i++;
    }

    cout << "\n---------" << endl;

    // sum - input n numbers
    int n;
    cin >> n;
    sum = 0;
    i = 0;
    while (i < n){
        int x;
        cin >> x;
        sum += x;
        i++;
    }
    cout << "Sum: " << sum << endl;
    
    return 0;
}