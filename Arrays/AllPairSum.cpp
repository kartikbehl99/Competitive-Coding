#include<bits/stdc++.h>
using namespace std;


long long sum(int arr[], int n) {
    long long s = 0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(abs(arr[j] - arr[i]) > 1) {
                s += arr[j] - arr[i];
            }
        }
    }
    return s;
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        cout<<sum(arr, n)<<endl;
    }
}