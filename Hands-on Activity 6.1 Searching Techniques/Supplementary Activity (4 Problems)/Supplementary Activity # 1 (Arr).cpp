#include <iostream>
using namespace std;

int sequentialSearch(int arr[], int size, int key) {
    int comparisons = 0;
    for (int i = 0; i < size; i++) {
        comparisons++;
        if (arr[i] == key) {
            cout << "Found key: " << key << " in the index of " << i << endl; // Display the found key
            return comparisons; // return the number of comparisons made
        }
    }
    return comparisons; // return comparisons even if the key is not found
}

int main() {
    int arr[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int key;

    cout << "Enter the key to search for: ";
    cin >> key; // User input for the key to search
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int comparisons = sequentialSearch(arr, size, key);
    cout << "Number of comparisons in array: " << comparisons << endl;

    return 0;
}

