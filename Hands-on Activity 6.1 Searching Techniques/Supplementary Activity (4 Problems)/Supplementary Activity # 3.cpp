#include <iostream>
using namespace std;


int binarySearch(int arr[], int size, int key) {
    int left = 0; // Starting index
    int right = size - 1; // Ending index

    while (left <= right) {
        int mid = left + (right - left) / 2; 
        
        
        if (arr[mid] == key) {
            return mid;
        }

       
        if (arr[mid] < key) {
            left = mid + 1;
        } else { 
            right = mid - 1;
        }
    }
    return -1; // Key not found
}

int main() {
    int arr[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size
    int key = 8; 

    int result = binarySearch(arr, size, key);
    if (result != -1) {
        cout << "Element " << key << " found at index: " << result << endl; // Show result
    } else {
        cout << "Element " << key << " not found." << endl; 
    }

    return 0;
}
