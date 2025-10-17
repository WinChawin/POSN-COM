#include <iostream>
using namespace std;

int main(){
    bool p = true, q = false;
    if (p && q){                    // and
        cout << "p && q\n";
    }
    if (p || q){                    // or
        cout << "p || q\n";
    }
    if (!p){                        // not
        cout << "!p\n";
    }

    bool bool1 = p && q;          // and &&
    bool bool2 = p || q;          // or ||
    bool bool3 = !p;              // not !
    cout << p << " and " << q << " is " << bool1 << "\n";
    cout << p << " or " << q << " is " << bool2 << "\n";
    cout << "not " << p << " is " << bool3 << "\n";
    return 0;
}