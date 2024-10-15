#ifndef SEARCHING_H
#define SEARCHING_H

#include "nodes.h"

// Linear search for a linked list
template <typename T>
bool linearLS(Node<T>* head, T dataFind) {
    Node<T>* current = head; // Start from the head
    while (current != NULL) {
        if (current->data == dataFind) {
            return true; // Data found
        }
        current = current->next; // Move to the next node
    }
    return false; // Data not found
}

// Binary search (on an array)
bool binarySearch(int arr[], int n, int no) {
    int low = 0, up = n - 1;
    while (low <= up) {
        int mid = (low + up) / 2;
        if (arr[mid] == no) {
            printf("Searching is successful!\n");
            return true; // Element found
        } else if (no < arr[mid]) {
            up = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }
    printf("Searching is not successful!\n");
    return false; // Element not found
}

#endif // SEARCHING_H

