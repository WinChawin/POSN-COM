#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> prices(5);
    
    vector<string> names(5, "Win"); // Initialize vector with 5 "Win"
    for (auto name : names){
        cout << name << " ";
    }
    cout << endl;


    string arr[5];
    for(int i = 0; i < 5; i++){
        arr[i] = "Win";
    }
    for (auto name : arr){
        cout << name << " ";
    }
    cout << endl;


    for(int i = 0; i < prices.size(); i++){
        prices[i] = (i + 1) * 10.5; // Assigning values
    }

    cout << "Prices: ";
    for(double price : prices){
        cout << price << " ";
    } 
    cout << endl;

    prices.at(2) = 99.99; // Change element at index 2
    prices[3] = 88.88; // Change element at index 3
    
    cout << "Updated Prices: ";
    for(double price : prices){
        cout << price << " ";
    }
    cout << endl;

    return 0;
}