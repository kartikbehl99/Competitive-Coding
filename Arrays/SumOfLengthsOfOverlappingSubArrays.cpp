#include <iostream>
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
	    int k;
	    cin>>k;
	    
	    int count = 0;
	    int sum = 0;
	    int index = -1;
	    
	    for(int i=0; i<n; i++) {
	        if(arr[i] < k) {
	            count++;
	        }
	        else if(arr[i] == k) {
	            index = i;
	            count++;
	        }
	        else {
	            if(count != 0 && index != -1) {
	                i--;
	                sum += count;
	                index = -1;
	            }
	            count = 0;
	        }
	    }
	    if(index == -1) {
	        count = 0;
	    }
	    sum += count;
	    cout<<sum<<endl;
	}
	return 0;
}