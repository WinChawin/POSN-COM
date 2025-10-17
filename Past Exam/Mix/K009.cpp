#include <iostream>
using namespace std;

int main(){
    string d;
    cin >> d;

    string dice[6][3] = {
        {"   ", " * ", "   "},
        {"   ", "* *", "   "},
        {" * ", " * ", " * "},
        {"* *", "   ", "* *"},
        {"* *", " * ", "* *"},
        {"* *", "* *", "* *"}
    };

    for(int i = 0; i < 3; i++){
        if(d[i] - '0' > 6){
            cout << "error";
            return 0;
        }
    }

    for(int i = 0; i < 3; i++){ 
        for(int j = 0; j < 3; j++){
            int n = d[j] - '0';
            cout << dice[n-1][i];

            if(j < 2){
                cout << "|";
            }
        }
        cout << "\n"; 
    }
    return 0;
}