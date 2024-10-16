#include <iostream>
#include <cstdlib>
#include <ctime>
#include "insertionsort.h" // Include the header here

using namespace std;

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

    // Call insertion sort
    insertionSort(arr, size_of_Arr);

    // Display the sorted array
    cout << "Now, this is the sorted Array:\n";
    for (int i = 0; i < size_of_Arr; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
