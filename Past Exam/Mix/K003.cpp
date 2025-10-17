#include <iostream>
using namespace std;

int main(){
    string str, sub;
    getline(cin, str);
    cin >> sub;

    int found = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == sub[0]){
            for(int j = 0; j < sub.length(); j++){
                if(str[i+j] == sub[j]) found = 1;
                else{
                    found = 0;
                    break;
                }
            }

            if(found){
                cout << i+1;
                return 0;
            }
        }
    }

    cout << -1;

    return 0;
}