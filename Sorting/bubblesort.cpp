#include <iostream> 
#include <vector>
#include "functions.h"
using namespace std;

void bubblesort(vector<int> &arr, int n){
    int temp;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j+1] < arr[j]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print(vector<int> &arr, int a){
    for(int i=0; i<a; i++){
        cout << arr[i] << " ";
    }
}

// 5 4 3 2 1
// 4 3 2 1 5  4 check
// 3 2 1 4 5  3 check
// 2 1 3 4 5  2 check
// 1 2 3 4 5  1 check

// int main(){
//     vector<int> a = {1, 4, 3, 2, 5};

//     bubblesort(a, 5);
//     print(a, 5);
// }
