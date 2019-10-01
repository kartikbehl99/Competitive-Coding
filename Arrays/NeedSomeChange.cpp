#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
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

        for(int i=0; i+2 < n; i++) {
            swap(&arr[i], &arr[i+2]);
        }

        for(int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}