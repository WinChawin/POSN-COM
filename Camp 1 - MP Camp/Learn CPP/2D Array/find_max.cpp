#include <iostream>
#include <climits>
using namespace std;

int main(){

    int mx = -1e9; // very small number
    // int mx = INT_MIN; // smallest integer value

    const int row = 3;
    const int col = 4;
    int matrix[row][col] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Maximum element in the 2D array: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j] > mx){
                mx = matrix[i][j];
            }
            // mx = max(mx, matrix[i][j]); // using built-in function
        }
    }
    cout << mx << endl;
    return 0;
}