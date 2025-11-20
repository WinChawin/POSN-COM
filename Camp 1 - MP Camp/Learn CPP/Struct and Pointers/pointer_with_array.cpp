#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int* p = arr;          // pointer variable, stores the address of the first element

    // Accessing array elements using pointer
    for (int i = 0; i < 5; i++) {
        cout << "Value at arr[" << i << "] = " << *(p + i) << endl; // pointer arithmetic 
    }

    return 0;
}