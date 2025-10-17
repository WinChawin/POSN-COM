#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    // reverse string กทม.ห้ามใช้
    // string rev = string(str.rbegin(), str.rend());      
    // if (str == rev){
    //     cout << "Palindrome" << endl;                   // อ่านจากหน้าไปหลัง-หลังไปหน้าเหมือนกัน    ex.chawinniwahc
    // }
    // else{
    //     cout << "Not Palindrome" << endl;
    // }



    // ใช้ foor loop
    bool isPalindrome = true;
    int len_tex = str.length();
    for (int i = 0; i < len_tex/2; i++){
        if (str[i] != str[(len_tex-1)-i]){
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }

    return 0;
} 