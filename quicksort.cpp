#include <iostream>
#include <vector>
using namespace std;

// parition bnao
int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];

    int i = low;
    int j = high;

    while(i<j){
        while(arr[i] <= pivot && i < high)
            i++;

        while(arr[j] > pivot)
            j--;

        if(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }   

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quicksort(vector<int> &arr,int low, int high){
    if(low < high){
        int p = partition(arr, low, high);

        quicksort(arr, low, p-1);
        quicksort(arr, p+1, high);
    }
}