//12_swap_number
#include <bits/stdc++.h>
using namespace std;

int main(){
    int r;
    cin>>r;
    int a[r][r];

    for(int i=0;i<r;i++)
        for(int j=0;j<r;j++)
            cin>>a[i][j];

    for(int i=0;i<r;i++)
        for(int j=0;j<r/2;j++) {
            int left=j;
            int right=r-1-j;
            int swapN=a[i][left];
            a[i][left]=a[i][right];
            a[i][right]=swapN;
        }

    //i==j ; i==i or i+j==r-1 ; j=r-i-1
     for(int i=0;i<r;i++){
        int swapN=a[i][i];
        a[i][i]=a[i][r-1-i];
        a[i][r-1-i]=swapN;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

/*
3
2 3 7
4 5 8
9 10 11

5
1 2 3 4 5
9 8 7 6 20
4 3 2 14 6
15 5 3 9 20
7 16 1 31 4
*/
