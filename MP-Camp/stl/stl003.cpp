#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector<int>v;
    while(true){
        int n; 
        cin >> n;
        if(n < 0) break;
        v.push_back(n);
    }
    cout << v.size() << "\n";
}