#include <iostream>
using namespace std;

struct Student{
    /* data */
    string name;
    int age;
    bool graduated;     // 1 -> true, 0 -> false 
};

int main(){
    int n;
    cin >> n;

    Student arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i].name >> arr[i].age >> arr[i].graduated;
    }

    for (int i = 0; i < n; i++){
        if (arr[i].graduated) {                                     // if (arr[i].graduated == 1) 
            cout << arr[i].name << " " << arr[i].age << endl;
        }
    }

    return 0;

}