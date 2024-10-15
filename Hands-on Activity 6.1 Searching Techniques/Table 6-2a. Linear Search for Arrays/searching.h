// searching.h
#ifndef SEARCHING_H
#define SEARCHING_H

#include "nodes.h"
#include <iostream>

template <typename T>
void linearSearch(Node<T>* head, T item) {
    Node<T>* current = head;
    int index = 0;

    while (current != NULL) {
        if (current->data == item) {
            std::cout << "Searching is successful: " << item << " found at index " << index << std::endl;
            return;
        }
        current = current->next;
        index++;
    }
    std::cout << "Searching is Unsuccessful: " << item << " not found" << std::endl;
}

#endif // SEARCHING_H

