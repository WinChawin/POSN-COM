#include <iostream>
using namespace std;

int main(){
    int n, count = 0, a;
    cin >> n;

    // เขียนเอง
    // for (int row = 1; row <= n; row++){
    //     for (int col = 1; col <= n; col++){
    //         count++;
    //         if (count > 26){
    //             a = count - 26;
    //         }
    //         else{
    //             a = count;
    //         }
    //         char c = 64 + a;
    //         cout << c;
    //     }
    //     cout << endl;
    // }


    // ปรับปรุง
    // int s = 65;
    // for (int row = 1; row <= n; row++){
    //     for (int col = 1; col <= n; col++){
    //         cout << char(s) << " ";
    //         if (s < 90){
    //             s++;
    //         }
    //         else{
    //             s -= 25;
    //         }
    //     }
    //     cout << endl;
    // }


    // อีกวิธี
    int s = 0;
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n; col++){
            cout << char(65 + s%26) << " ";
            s++;
        }
        cout << endl;
    }

    return 0;
}



// 9
// A B C D E F G H I 
// J K L M N O P Q R
// S T U V W X Y Z A
// B C D E F G H I J
// K L M N O P Q R S
// T U V W X Y Z A B
// C D E F G H I J K
// L M N O P Q R S T
// U V W X Y Z A B C