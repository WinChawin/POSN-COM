#include <iostream>
using namespace std;

int main(){
    int p[3][7];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 7; j++){
            cin >> p[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            for(int k = i; k < i+3; k++){
                sum += p[j][k];
            }
        }
        cout << sum << " ";
    }

    return 0;
}