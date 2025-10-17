#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int s3 = n%10, s2 = n/10 % 10, s1 = n/100 % 10;

    int H = s1;
    if (s2 > H) H = s2;
    if (s3 > H) H = s3;

    for (int i = H; i >= 1; --i){
        cout << (s1 >= i ? "*" : " ");
        cout << " | " ;
        cout << (s2 >= i ? "*" : " ");
        cout << " | " ;
        cout << (s3 >= i ? "*" : " ");
        cout << endl;

    }

    return 0;
}