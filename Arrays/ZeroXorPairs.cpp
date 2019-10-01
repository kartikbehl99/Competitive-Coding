#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];
        map<int, int> m;
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            m[arr[i]]++;
        }

        map<int, int>::iterator it;
        int count = 0;
        for(it = m.begin(); it != m.end(); it++) {
            if(it->second >= 2) {
                count += (it->second)*(it->second-1) / 2;
            }
        }
    }
}