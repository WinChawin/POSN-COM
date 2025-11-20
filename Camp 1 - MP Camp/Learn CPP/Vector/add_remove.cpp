#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(){
    vector<string> fruits;
    deque<string> veggies;

    veggies.push_back("Carrot");
    veggies.push_back("Broccoli");
    veggies.push_front("Spinach");
    cout << "Vegetables: ";
    for(string veg : veggies){
        cout << veg << " ";
    }
    cout << endl;

    fruits.push_back("Apple");
    fruits.push_back("Banana");
    fruits.push_back("Orange");

    cout << "Current fruits: ";
    for(string fruit : fruits){
        cout << fruit << " ";
    }
    cout << endl;

    fruits.pop_back(); // Removes "Orange"
    fruits.insert(fruits.begin() + 1, "Grapes"); // Insert "Grapes" at index 1

    cout << "After change: ";
    for(string fruit : fruits){
        cout << fruit << " ";
    }
    cout << endl;

    return 0;
}