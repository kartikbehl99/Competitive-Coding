#include<bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n) {
    map<int, vector<int>> m;

    int max = INT_MIN;
    for(int i=0; i<n; i++) {
        for(int j=n-1; j>=i; j--) {
            if(arr[i] == arr[j] && (j-i) > max) {
                max = j-i;
            }
        }
    }
    return max;
}