#include <iostream>
using namespace std;

int main(){
    int n, count = 0, a;
    string vowels = "AEIOU";
    cin >> n;

    int s = 0;
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n; col++){
            if ((char(65 + s%26) == 65) || (char(65 + s%26) == 69) || (char(65 + s%26) == 73) || 
            (char(65 + s%26) == 79) || (char(65 + s%26) == 85)){
                cout << "*" << " ";
            }
            else{
                cout << char(65 + s%26) << " ";
            }
            s++;
        }
        cout << endl;
    }

    return 0;
}



// 9
// * B C D * F G H * 
// J K L M N * P Q R
// S T * V W X Y Z *
// B C D * F G H * J
// K L M N * P Q R S
// T * V W X Y Z * B
// C D * F G H * J K
// L M N * P Q R S T
// * V W X Y Z * B C 