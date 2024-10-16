#include <iostream>
#include <cstdlib>
#include <ctime>
#include "selectionsort.h"
using namespace std;

// Finding the position of the smallest element in the array
template <typename T>
int Small_elmnt(T A[], int K, const int arrSize) {
    int position = K;
    for (int j = K + 1; j < arrSize; j++) {
        if (A[j] < A[position]) {
            position = j;
        }
    }
    return position;
}

// Implementation of selection sort
template <typename T>
void selc_sort(T arr[], const int N) {
    for (int i = 0; i < N - 1; i++) {
        int POS = Small_elmnt(arr, i, N);
        swap(arr[i], arr[POS]);
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

    // Call selection sort
    selc_sort(arr, size_of_Arr);

    // Display the sorted array
    cout << "Now, this is the sorted Array:\n";
    for (int i = 0; i < size_of_Arr; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
