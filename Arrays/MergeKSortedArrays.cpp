#include<iostream>
using namespace std;

int* merge(int arr1[], int *size1, int arr2[], int size2) {
    int i=0, j=0;
    int *temp = new int[1000];
    int s = 0;
    while(i < (*size1) && j < size2) {
        if(arr1[i] < arr2[j]) {
            temp[s++] = arr1[i++];
        }
        else {
            temp[s++] = arr2[j++];
        }
    }
    while(i < *size1) {
        temp[s++] = arr1[i++];
    }
    while(j < size2) {
        temp[s++] = arr2[j++];
    }
    *size1 = s;
    return temp;
}

int *mergeKArrays(int arr[][1000], int k) {
    int* a = new int[1000];
    int size = 0;
    for(int i=0; i<k; i++) {
        a = merge(a, &size, arr[i], k);
    }
    return a;
}