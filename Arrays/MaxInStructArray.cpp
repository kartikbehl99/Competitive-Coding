#include<bits/stdc++.h>
using namespace std;

struct Height {
	int feet;
	int inches;
};

int findMax(Height arr[], int n) {
    int max = INT_MIN;
    for(int i=0; i<n; i++) {
        int sum = (arr[i].feet*12) + arr[i].inches;
        if(sum > max) {
            max = sum;
        }
    }

    return max;
}