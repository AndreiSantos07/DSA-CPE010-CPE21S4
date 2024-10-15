#ifndef SEARCHING_H
#define SEARCHING_H

#include <iostream>
using namespace std;

// Function to perform binary search
void binarySearch(int arr[], int n, int no) {
    int low = 0, up = n - 1;

    while (low <= up) {
        int mid = (low + up) / 2;

        if (no == arr[mid]) {
            cout << "Search element is found!" << endl;
            return;
        } else if (no < arr[mid]) {
            up = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << "Search element is not found" << endl;
}

#endif // SEARCHING_H

