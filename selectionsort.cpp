#include <iostream>
#include <vector>
using namespace std;

void selectionsort(vector<int> &arr, int n){
    int temp;
    for(int i=0; i<n-1; i++){
        int minidx = i;
        for(int j=i+1; j<n-1; j++){
            if(arr[j] <= arr[minidx]){
                minidx = j;
            }
        }
        temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
}