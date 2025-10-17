#include <iostream>
using namespace std;

int main(){
    string student[3]; // จองไว้ 3 ช่อง
    student[0] = "Alice";
    student[1] = "Bob";
    student[2] = "Charlie";

    cout << sizeof(student) << endl; // size in bytes
    cout << sizeof(student[0]) << endl; // size of one element in bytes
    cout << sizeof(student)/sizeof(student[0]) << endl; // number of elements

    for (int i =0; i < sizeof(student)/sizeof(student[0]); i++){
        cout << student[i] << " ";
    }

    cout << endl;

    int num[3];
    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    cout << num[100]; // undefined behavior

    cout << endl;

    int score[] = {100, 90, 80, 70, 60};
    cout << sizeof(score)/sizeof(score[0]) << endl; // 5
    cout << score[1] << endl; // 90

    cout << endl;

    int n;
    cout << "Enter n: ";
    cin >> n;
    int data[n];
    for (int i = 0; i < n; i++){
        cin >> data[i];
    }
    for (int i = 0; i < n; i++){
        cout << data[i] << " ";
    }

    return 0;
}