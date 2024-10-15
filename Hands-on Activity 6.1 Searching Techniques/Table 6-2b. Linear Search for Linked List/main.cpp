#include <iostream>
#include "nodes.h"
#include "searching.h"

int main() {
    // Create linked list for the name "Andrei"
    Node<char>* name1 = new_node('A');
    Node<char>* name2 = new_node('n');
    Node<char>* name3 = new_node('d');
    Node<char>* name4 = new_node('r');
    Node<char>* name5 = new_node('e');
    Node<char>* name6 = new_node('i');

    // Link each node to each other
    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = name5;
    name5->next = name6;
    name6->next = NULL;

    // letter to search
    char dataToFind;
    std::cout << "Enter a letter to search in the linked list: ";
    std::cin >> dataToFind;

    // linear search
    if (linearLS(name1, dataToFind)) {
        std::cout << "Letter '" << dataToFind << "' found in the linked list." << std::endl;
    } else {
        std::cout << "Letter '" << dataToFind << "' not found in the linked list." << std::endl;
    }

    return 0;
}

