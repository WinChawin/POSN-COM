#include <iostream>
#include <vector>
using namespace std;

int main(){

    int even = 0, odd = 0;
    vector<int> nums = {1, 8, 4, 3, 1};

    // for loop ธรรมดา
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;

    cout << "------------------" << endl;

    // for each loop (For Range-based loop)
    even = 0, odd = 0;
    for (auto ele : nums){
        if (ele % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;

    return 0;
}