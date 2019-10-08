#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n, k;
	    cin>>n>>k;
	    int arr[n];
	    map<int, int> m;
	    for(int i=0; i<n; i++) {
	        cin>>arr[i];
	        m[arr[i]]++;
	    }
	    int sum = 0;
	    for(int i=0; i<n; i++) {
	        int temp = k - arr[i];
	        m[arr[i]]--;
	        if(m[temp] > 0) {
	            sum += m[temp];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}