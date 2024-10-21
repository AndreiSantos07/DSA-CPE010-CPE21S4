#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MergeSort.h"

using namespace std;

int main() {
    const int size_of_Arr = 100; 
    int arr[size_of_Arr];

    srand(time(0)); 
    for (int a = 0; a < size_of_Arr; ++a) 
    {
        arr[a] = rand() % 100; 
    }

 
    cout << "This is the raw and unsorted Array:\n";
    for (int a = 0; a < size_of_Arr; ++a) 
    {
        cout << arr[a] << " ";
    }
    cout << endl;

    merge_sort(arr, 0, size_of_Arr - 1);

    cout << "Now, this is the sorted Array:\n";
    for (int a = 0; a < size_of_Arr; ++a) 
    {
        cout << arr[a] << " ";
    }
    cout << endl;

    return 0;
}
