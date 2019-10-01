#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n], copy[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            copy[i] = arr[i];
        }

        for(int i=0; i<n; i++) {
            if(arr[i] <= n) {
                copy[arr[i]-1] = i+1;
            }
        }

        for(int i=0; i<n; i++) {
            cout<<copy[i]<<" ";
        }

        cout<<endl;
    }
}