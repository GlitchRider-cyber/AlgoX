#include <iostream> 
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr, int size, int index, int target){

    if(index >= size)
        return -1;

    if(arr[index] == target)
        return index;
    
    return linearSearch(arr, size, index+1, target); 
}