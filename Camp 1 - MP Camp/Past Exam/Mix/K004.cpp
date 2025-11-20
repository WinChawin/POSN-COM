#include <iostream>
using namespace std;

int main(){
    string str, sub;
    cin >> str >> sub;

    int cnt = 0;

    for(int i = 0; i < str.length(); i++){
        int found = 0;
        if(str[i] == sub[0]){
            for(int j = 0; j < sub.length(); j++){
                if(str[i+j] == sub[j]) found = 1;
                else{
                    found = 1;
                    break;
                }
            }
            if(found) cnt++;
        }
    }

    cout << cnt;

    return 0;
}