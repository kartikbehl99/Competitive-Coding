#include<iostream>
using namespace std;

void interchange(int a[][1000], int r, int c) {
    int colBeg = 0, colEnd = c-1;
    for(int i=0; i<r; i++) {
        int temp = a[i][colBeg];
        a[i][colBeg] = a[i][colEnd];
        a[i][colEnd] = temp;
    }
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}