#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
using namespace std;

void bubblesort(vector<int> &arr, int n);
void selectionsort(vector<int> &arr, int n);
void quicksort(vector<int> &arr,int low, int high);
void mergesort(vector<int> &arr, int low, int high);
void insertionsort(vector<int> &arr, int n);
int linearSearch(vector<int> &arr, int size, int index, int target);
int binarySearch(vector<int> &arr, int size, int low, int high, int target);
void print(vector<int> &arr, int a);

#endif
