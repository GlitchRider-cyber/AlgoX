#include <iostream> 
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int size, int low, int high, int target){

    if(low > high)
        return -1;
    
    int mid = (low + high)/2;

    if(arr[mid] == target)
        return mid;
    
    if(arr[mid] > target)
        return binarySearch(arr, size, low, mid-1, target);
    else 
        return binarySearch(arr, size, mid+1, high, target);
}