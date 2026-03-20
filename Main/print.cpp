#include <iostream> 
#include <vector>

using namespace std;

void print(vector<int> &arr, int a){
    for(int i=0; i<a; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
