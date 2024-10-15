// main.cpp
#include <iostream>
#include "nodes.h"
#include "searching.h"

int main() {
    // Create a linked list: 12 -> 24 -> 36 -> 48 -> 60 -> 72
    Node<int>* head = new_node(12);
    head->next = new_node(24);
    head->next->next = new_node(36);
    head->next->next->next = new_node(48);
    head->next->next->next->next = new_node(60);
    head->next->next->next->next->next = new_node(72);

    // Prompt user for the item to search
    int itemToSearch;
    std::cout << "Enter the value to search: ";
    std::cin >> itemToSearch;

    // Perform linear search
    linearSearch(head, itemToSearch);

    Node<int>* current = head;
    while (current != NULL) {
        Node<int>* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}

