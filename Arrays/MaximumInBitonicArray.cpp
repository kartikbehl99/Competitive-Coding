#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int start = 0;
    int end = n-1;
    
    while(start <= end) {
        int mid = (start + end) / 2;
        
        if(mid == n-1) {
            return arr[mid];
        }
        
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
            return arr[mid];
        }
        
        else if(arr[mid] < arr[mid-1] && arr[mid] > arr[mid + 1]) {
            end = mid-1;
        }
        
        else if(arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
    }
    
    return -1;
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
	    cout<<findMax(arr, n)<<endl;
	}
	return 0;
}