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

    int sum_row[row];
    // Calculate and print the sum of each row
    for (int i = 0; i < row; i++){
        sum_row[i] = 0;
        for (int j = 0; j < col; j++){
            sum_row[i] += matrix[i][j];
        }
        cout << "Sum of row " << i << ": " << sum_row[i] << endl;
    }

    int sum_col;
    // Calculate and print the sum of each column
    for (int j = 0; j < col; j++){
        sum_col = 0;
        for (int i = 0; i < row; i++){
            sum_col += matrix[i][j];
        }
        cout << "Sum of column " << j << ": " << sum_col << endl;
    }
    return 0;
}