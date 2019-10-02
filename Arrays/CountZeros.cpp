#include <iostream>
using namespace std;

int findFirstZero(int arr[], int n) {
    int start = 0;
    int end = n-1;
    
    while(start <= end) {
        int mid = (start + end) / 2;
        
        if(arr[mid] < arr[mid-1]) {
            return mid;
        }
        
        else if(arr[mid] == 0){
            end = mid - 1;
        }
        
        else {
            start = mid + 1;
        }
    }
    
    return 0;
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
	    
	    int firstZero = findFirstZero(arr, n);
	    cout<<(n - firstZero)<<endl;
	   //cout<<n<<" "<<firstZero<<endl;
	}
}