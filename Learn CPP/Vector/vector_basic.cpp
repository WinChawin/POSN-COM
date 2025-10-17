#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Vector elements: ";
    for(int num : numbers){
        cout << num << " ";
    }
    cout << endl;

    cout << "Size of vector: " << numbers.size() << endl;
    cout << "First element: " << numbers.front() << endl;   // numbers[0]
    cout << "Last element: " << numbers.back() << endl;    // numbers[numbers.size() - 1]
}