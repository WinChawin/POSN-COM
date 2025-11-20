#include <iostream>
using namespace std;

int main(){
    string str, num;
    getline(cin, str);
    cin >> num;

    int n = str.length();
    string s = "";
    int r = 0;
    for(int i = 0; i < n; i++){
        if(str[r] != ' ') s+=str[r++];
        else{
            s+=num;
            r++;
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < n; j++){
            if(j%8 == i){
                cout << s[j];
            }
        }
    }

    return 0;
}