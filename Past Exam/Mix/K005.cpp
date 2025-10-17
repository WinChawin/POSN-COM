#include <iostream>
using namespace std; 

int main(){
    int ra, ca, rb, cb;
    cin >> ra >> ca >> rb >> cb;

    if(ca!=rb){
        cout << "not multiply";
    }
    else{
        int ma[ra][ca], mb[rb][cb], mc[ra][cb];

        for(int i = 0; i < ra; i++){
            for(int j = 0; j < ca; j++){
                cin >> ma[i][j];
            }
        }

        for(int i = 0; i < rb; i++){
            for(int j = 0; j < cb; j++){
                cin >> mb[i][j];
            }
        }

        for(int i = 0; i < ra; i++){
            for(int j = 0; j < cb; j++){
                mc[i][j] = 0;
            }
        }

        for(int i = 0; i < ra; i++){
            for(int j = 0; j < cb; j++){
                for(int k = 0; k < ca; k++){
                    mc[i][j] += ma[i][k]*mb[k][j];
                }
            }
        }

        for(int i = 0; i < ra; i++){
            for(int j = 0; j < cb; j++){
                cout << mc[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}