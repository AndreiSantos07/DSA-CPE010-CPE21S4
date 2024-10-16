#include <iostream>
#include <cstdlib>
#include <ctime>
#include "BubbleSort.h"
using namespace std;

// Implementation of bubbleSort
void bubbleSort(int arr[], int arrSize) {
    // Outer loop for each element
    for (int i = 0; i < arrSize - 1; ++i) {
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < arrSize - i - 1; ++j) {
            // If the current element is greater than the next, swap them
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int size_of_Arr = 100; 
    int arr[size_of_Arr];

    // Seed the random number generator
    srand(time(0)); 
    // Fill the array with random numbers
    for (int i = 0; i < size_of_Arr; ++i) {
        arr[i] = rand() % 1000; 
    }

    // Display the unsorted array
    cout << "This is the unsorted Array:\n";
    for (int i = 0; i < size_of_Arr; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call bubble sort to sort the array
    bubbleSort(arr, size_of_Arr);

    // Display the sorted array
    cout << "\nNow, this is the sorted Array:\n";
    for (int i = 0; i < size_of_Arr; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
