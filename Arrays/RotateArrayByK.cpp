#include <iostream>
using namespace std;
void reverseArr(int a[], int start, int end) {
    while(start <= end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

void rotate(int a[], int n, int d) {
    reverseArr(a, 0, d-1);
    reverseArr(a, d, n-1);
    reverseArr(a, 0, n-1);
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n, d;
	    cin>>n>>d;
	    int a[n];
	    for(int i=0; i<n; i++) {
	        cin>>a[i];
	    }
	    rotate(a, n, d);
	    for(int i=0; i<n; i++) {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}