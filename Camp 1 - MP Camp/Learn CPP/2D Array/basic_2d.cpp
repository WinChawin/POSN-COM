#include <iostream>
using namespace std;

int main(){
    const int row = 3;
    const int col = 4;
    int matrix[row][col] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print the 2D array
    cout << "2D array elements:" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}