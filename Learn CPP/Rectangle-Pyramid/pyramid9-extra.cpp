#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n;

    for (int i = 1; i < 2*n; i++){
        if (i > 5){
            k = n - (i%5);
        }
        else{
            k = i;
        }
        for (int j = 0; j < n - k; j++){
            cout << " ";
        }
        for (int j = 0; j < 2*k-1; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// 5
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *



// อีกวิธี

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; // เช่น ใส่ 5

//     int totalRows = 2 * n - 1; // แถวทั้งหมด (ขึ้น+ลง)

//     for (int i = 1; i <= totalRows; i++) {
//         int stars = (i <= n) ? (2 * i - 1) : (2 * (totalRows - i + 1) - 1);
//         int spaces = (totalRows - stars) / 2;

//         // พิมพ์ช่องว่าง
//         for (int j = 0; j < spaces; j++) cout << " ";
//         // พิมพ์ดาว
//         for (int j = 0; j < stars; j++) cout << "*";
//         cout << "\n";
//     }

//     return 0;
// }
