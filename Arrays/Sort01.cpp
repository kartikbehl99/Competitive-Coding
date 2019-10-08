#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int arr[n], count0 = 0;
	    for(int i=0; i<n; i++) {
	        cin>>arr[i];
	    }
	    for(int i=0; i<n; i++) {
			if(!arr[i])
	            count0++;
	    }
		for(int i=0; i<n; i++) {
			if(i < count0) {
	            arr[i] = 0;
	        }
	        else {
	            arr[i] = 1;
	        }
		}
	    for(int i=0; i<n; i++) {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}