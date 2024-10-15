#include <iostream>
#include "nodes.h"
#include "searching.h"

using namespace std;

int main() {
    char choice = 'y';
    int count = 1;
    int newData;
    int item;
    Node<int>* temp, * head, * node;

    while (choice == 'y') {
        cout << "Enter data: ";
        cin >> newData;

        if (count == 1) {
            head = new_node(newData);
            cout << "Successfully added " << head->data << " to the list.\n";
            count++;
        }
        else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            node = new_node(newData);
            temp->next = node;
            cout << "Successfully added " << node->data << " to the list.\n";
            count++;
        }

        // Check if wants to continue
        cout << "Continue? (y/n): ";
        cin >> choice;
        cout << endl;
    }

    // Display the linked list
    cout << "The linked list data is: ";
    Node<int>* currNode = head;
    while (currNode != NULL) {
        cout << currNode->data << " ";
        currNode = currNode->next;
    }
    cout << endl;

    // Search for an element in the linked list
    cout << "Please enter the number to search: ";
    cin >> item;
    binarySearch(head, item);

    return 0;
}

