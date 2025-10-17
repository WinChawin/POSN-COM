#include <iostream>
using namespace std;

int main(){
    const int ROWS_A = 2, COLS_A = 3;
    const int ROWS_B = 3, COLS_B = 2;

    int matrixA[ROWS_A][COLS_A] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrixB[ROWS_B][COLS_B] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int result[ROWS_A][COLS_B] = {0};

    // Matrix multiplication                                            colA = rowB ---> result = rowA x colB
    for(int i = 0; i < ROWS_A; i++){                                //  Row A - ใช้ row A ไปคูณกับ col B
        for(int j = 0; j < COLS_B; j++){                            //  Col B  
            for(int k = 0; k < COLS_A; k++){                        //  k - ตัวที่วนใน A กับ B พร้อมกัน
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    // Print the result
    cout << "Resultant Matrix after multiplication:" << endl;       //      58 [(1x7) + (2x9) + (3x11)]      64 [(1x8) + (2x10) + (3x12)]
    for(int i = 0; i < ROWS_A; i++){                                //      139 [(4x7) + (5x9) + (6x11)]     154 [(4x8) + (5x10) + (6x12)]
        for(int j = 0; j < COLS_B; j++){
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}