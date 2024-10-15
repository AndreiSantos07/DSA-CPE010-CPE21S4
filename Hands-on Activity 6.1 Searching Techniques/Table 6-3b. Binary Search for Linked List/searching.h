#ifndef SEARCHING_H
#define SEARCHING_H

#include "nodes.h"
#include <iostream>
using namespace std;

template <typename T>
Node<T>* getMiddle(Node<T>* start, Node<T>* end) {
    if (start == NULL) return NULL;
    Node<T>* slow = start;
    Node<T>* fast = start->next;

    while (fast != end) {
        fast = fast->next;
        if (fast != end) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    return slow;
}

template <typename T>
Node<T>* binarySearch(Node<T>* head, T item) {
    Node<T>* start = head;
    Node<T>* end = NULL;

    do {
        Node<T>* mid = getMiddle(start, end);
        if (mid == NULL) return NULL;

        if (mid->data == item) {
            cout << "Search element " << item << " is found!" << endl;
            return mid;
        }
        else if (mid->data < item) {
            start = mid->next;
        }
        else {
            end = mid;
        }
    } while (end == NULL || end != start);

    cout << "Search element " << item << " is not found." << endl;
    return NULL;
}

#endif // SEARCHING_H

