#include <iostream>
#include "searching.h"
#include "nodes.h"

using namespace std;

int main() {

    int arr[] = {2, 5, 8, 12, 16, 24, 25, 36, 48, 56}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int searchElement;

    cout << "Enter the element to search: ";
    cin >> searchElement;

    binarySearch(arr, n, searchElement);

    return 0;
}

