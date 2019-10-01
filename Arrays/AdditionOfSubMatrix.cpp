#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int r, c;
        cin>>r>>c;
        int a[r][c];
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                cin>>a[i][j];
            }
        }
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;

        int sum = 0;
        for(int i=x1-1; i<=x2-1; i++) {
            for(int j=y1-1; j<=y2-1; j++) {
                sum += a[i][j];
            }
        }
        cout<<sum<<endl;
    }
}