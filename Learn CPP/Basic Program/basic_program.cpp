#include <iostream>         // include library
using namespace std;        

// ** cout cpp ติดกันเลย : Hello worldWin **
int main(){
    cout << "Hello world";
    cout << "Win";
    return 0;
}




// ** ใช้ \n ขึ้นบรรทัดใหม่ 2 วิธี**

// 1. \n    เร็วกว่า
int main(){
    cout << "Hello world\n";
    cout << "Win";
}

// 2. endl
int main(){
    cout << "Hello world" << endl;
    cout << "Win";
}




// ** \t คือ tap **
int main(){
    cout << "Hello world\n";
    cout << "\t Win";
}




// 2 บรรทัดนี้ทำให้การรับและปริ้นข้อมูลใน CPP เร็วเหมือน C
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}




#include <math.h>            // คิดเลข

#include <vector>            // ใช้เวกเตอร์

#include <bits/stdc++.h>     // ครอบจักรวาล