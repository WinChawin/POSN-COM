#include <iostream>
using namespace std;

// ฟังก์ชันบวกเลข
int add(int a, int b){
    return a + b;
}

void print_menu(int a, int b){
    cout << "This is the add program of " << a << " and " << b << endl;
}

int main(){
    int x, y;
    cin >> x >> y;
    print_menu(x, y);
    cout << "Sum: " << add(x, y) << endl;
    return 0;
}