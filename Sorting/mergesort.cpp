#include <iostream>
#include <vector>
using namespace std;

void mergesorted(vector<int> &arr, int low, int mid, int high){

    int i = low;
    int j = mid+1;

    vector<int> b(high-low+1);
    int k = 0;

    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            b[k++] = arr[i++];
        } else {
            b[k++] = arr[j++];
        }
    }

    while(i <= mid){
        b[k++] = arr[i++];
    }

    while(j <= high){
        b[k++] = arr[j++];
    }

    for(int i = low, k = 0; i<=high; i++, k++){
        arr[i] = b[k];
    }
}

void mergesort(vector<int> &arr, int low, int high){
    if(low < high){
        int mid = (low + high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        mergesorted(arr, low, mid, high);
    }
}
