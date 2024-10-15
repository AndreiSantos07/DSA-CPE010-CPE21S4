#include <iostream>
using namespace std;

int countRepeatsInArray(int arr[], int size, int key) {
    int count = 0; 
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count; 
}

int main() {
    int arr[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int key;

    cout << "Enter the key to search for: ";
    cin >> key; 
    int count = countRepeatsInArray(arr, size, key);
    cout << "Number of repeating instances of " << key << " in array: " << count << endl; 

    return 0;
}
