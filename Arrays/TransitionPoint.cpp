#include<iostream>
using namespace std;

int transitionPoint(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while(start <= end) {
        int mid = (start + end)/2;
        if(arr[mid] > arr[mid-1]) {
            return mid;
        }
        else if(arr[mid] == 0){
            start = mid+1;
        }
        else if(arr[mid] == 1) {
            end = mid-1;
        }
    }
    return -1;
}