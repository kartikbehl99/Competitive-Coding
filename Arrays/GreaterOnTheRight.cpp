#include <bits/stdc++.h>
using namespace std;

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
	    int greatest = arr[n-1];
	    arr[n-1] = -1;
	    
	    for(int i=n-2; i>=0; i--) {
	        int temp = arr[i];
	        arr[i] = greatest;
	        greatest = max(temp, greatest);
	    }
	    
	    for(int i=0; i<n; i++) {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}