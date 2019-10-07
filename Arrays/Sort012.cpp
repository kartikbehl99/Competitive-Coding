#include <iostream>
using namespace std;

void sort(int arr[], int n) {
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            count0++;
        }
        else if(arr[i] == 1) {
            count1++;
        }
        else {
            count2++;
        }
    }
    
    int newArr[n];
    for(int i=0; i<n; i++) {
        if(i < count0) {
            newArr[i] = 0;
        }
        else if(i < count0 + count1) {
            newArr[i] = 1;
        }
        else if(i < count0 + count1 + count2) {
            newArr[i] = 2;
        }
    }
    
    for(int i=0; i<n; i++) {
        cout<<newArr[i]<<" ";
    }
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
	    
	    sort(arr, n);
	    cout<<endl;
	}
	return 0;
}