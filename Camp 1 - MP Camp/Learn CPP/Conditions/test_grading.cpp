#include <iostream>
using namespace std;

int main(){
    int score;
    cin >> score;
    if ((score <= 100) && (score >= 0)){
        if (score >= 80){
            cout << "A\n";
        }
        else if (score >= 75){
            cout << "B+\n";
        }
        else if (score >= 70){
            cout << "B\n";
        }
        else if (score >= 65){
            cout << "C+\n";
        }
        else if (score >= 60){
            cout << "C\n";
        }
        else if (score >= 55){
            cout << "D+\n";
        }
        else if (score >= 50){
            cout << "D\n";
        }
        else{
            cout << "F\n";
        }
    }
    else{
        cout << "Invalid score\n";
    }
}