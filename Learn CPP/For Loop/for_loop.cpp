#include <iostream>
using namespace std;

// Looping 
// for loop -> ใช้เมื่อทราบจำนวนลูปที่แน่นอน
// while loop -> ใช้เมื่อไม่ทราบจำนวนลูปที่แน่นอน
// for range base loop -> ใช้เมื่อไม่ทราบจำนวนลูปที่แน่นอน และต้องการเข้าถึงสมาชิกใน container, ใช้เมื่อต้องการวนซ้ำทุก element ใน container
// do while loop -> ทำก่อนค่อยเช็ค ใช้เมื่อไม่ทราบจำนวนลูปที่แน่นอน และต้องการให้ลูปทำงานอย่างน้อย 1 ครั้ง

// break -> ใช้เพื่อออกจากลูปทันที
// continue -> ใช้เพื่อข้ามการทำงานในลูปครั้งนั้นๆ แล้วไปทำงานในลูปครั้งถัดไป


int main(){
    // for loop
    for (int i = 0; i < 5; i++){
        cout << i << " ";
    }

    cout << "\n---------" << endl;

    for (int i = 1, j = 2; i <= 15; i+=j, j++){
        cout << i << " ";
    }

    cout << "\n---------" << endl;

    for (int i = 0; i <= 10; i++){
        if (i%2 == 0){
            continue;
        }
        cout << i << " ";
    }

    cout << "\n---------" << endl;

    // sum
    int sum = 0;
    float mean;
    cout << "Enter 3 numbers: ";
    for (int i = 0; i < 3; i++){
        int x;
        cin >> x;
        sum += x;
    }
    cout << "Sum: " << sum << endl;
    mean = (float)sum / 3;
    cout << "Mean: " << mean << endl;

    cout << "\n---------" << endl;

    // input n loops
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << i << " ";
    }

    return 0;
}