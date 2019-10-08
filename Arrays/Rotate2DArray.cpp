#include <iostream>
using namespace std;


void transpose(int arr[][10], int n) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

void reverseArray(int arr[], int n) {
    int i = 0, j = n-1;
    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void reverseEachRow(int arr[][10], int n) {
    for(int i=0; i<n; i++) {
        reverseArray(arr[i], n);
    }
}

void rotate(int arr[][10], int n) {
    transpose(arr, n);
    reverseEachRow(arr, n);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int arr[10][10];
	    
	    for(int i=0; i<n; i++) {
	        for(int j=0; j<n; j++) {
	            cin>>arr[i][j];
	        }
	    }
	    
	    rotate(arr, n);
	    
	    for(int i=0; i<n; i++) {
	        for(int j=0; j<n; j++) {
	            cout<<arr[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	    
	}
	return 0;
}