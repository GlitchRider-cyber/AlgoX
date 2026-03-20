#include <iostream>
#include <vector>
#include "functions.h"

using namespace std;

int main(){
    vector<int> a = {1, 4, 3, 2, 5};
    bubblesort(a, 5);
    print(a, 5);
    // 1 2 3 4 5
    // T.C O(n^2) in all cases

    vector<int> b = {1, 2, 3, 4, 5, 6, 7, 8};
    selectionsort(b, 8);
    print(b, 8);
    // 1 2 3 4 5 6 7 8
    // T.C O(n^2) in all cases

    vector<int> c = {5, 4, 3, 2, 1, 6};
    insertionsort(c, 6);
    print(c, 6);
    // 1 2 3 4 5 6
    // T.C 
    //
    //
    //

    vector<int> d = {9, 8, 7, 6, 5, 2};
    mergesort(d, 0, 5);
    print(d, 6);
    // 2 5 6 7 8 9
    // T.C 
    // 
    // 

    vector<int> e = {5, 8, 3, 9, 2};
    quicksort(e, 0, 4);
    print(e, 5);
    // 2 3 5 8 9

    cout << "index of element is " << linearSearch(b, 8, 0, 6) << endl;
    // 5 
    // T.C O(n) wrost or avg case and O(1) in best case
    cout << "index of element is " << binarySearch(e, 5, 0, 4, 9) << endl;
    // 4
    // T.C O(logn) wrost or avg case and O(1) in best case
}