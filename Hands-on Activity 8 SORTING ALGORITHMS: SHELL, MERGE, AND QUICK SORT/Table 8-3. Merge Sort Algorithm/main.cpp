#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MergeSort.h"

using namespace std;

int main() {
    const int size_of_Arr = 100; 
    int arr[size_of_Arr];

    srand(time(0)); 
    for (int i = 0; i < size_of_Arr; ++i) 
    {
        arr[i] = rand() % 100; 
    }

 
    cout << "This is the raw and unsorted Array:\n";
    for (int i = 0; i < size_of_Arr; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    merge_sort(arr, 0, size_of_Arr - 1);

    cout << "Now, this is the sorted Array:\n";
    for (int i = 0; i < size_of_Arr; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
