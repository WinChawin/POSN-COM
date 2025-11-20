#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 5, c = 12;
    if (a < b){                               // less than
        cout << "a < b\n";
    }
    if (a > b){                               // greater than
        cout << "a > b\n";
    }
    if (a <= b){                              // less than or equal to
        cout << "a <= b\n";
    }
    if (a >= b){                              // greater than or equal to
        cout << "a >= b\n";
    }
    if (a == b){                               // equal to
        cout << "a == b\n";
    }
    if (a != b){                               // not equal to
        cout << "a != b\n";
    }
    if ((a < b) && (b < c)){                   // and  
        cout << "(a < b) && (b < c)\n";
    }
    if ((a < b) || (b < c)){                   // or
        cout << "(a < b) || (b < c)\n";
    }
    return 0;
}