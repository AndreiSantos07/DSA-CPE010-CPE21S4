#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->next = NULL;
    return node;
}

// Sequential search function for the linked list
int linkedListSearch(Node* head, int key) {
    int comparisons = 0;
    Node* current = head;
    while (current != NULL) {
        comparisons++;
        if (current->data == key) {
            cout << "Found key: " << key << " in the linked list" << endl; // Display the found key
            return comparisons; // return the number of comparisons made
        }
        current = current->next;
    }
    return comparisons; // return comparisons even if the key is not found
}

int main() {
    // Creating a linked list
    Node* head = newNode(15);
    head->next = newNode(18);
    head->next->next = newNode(2);
    head->next->next->next = newNode(19);
    head->next->next->next->next = newNode(18);
    head->next->next->next->next->next = newNode(0);
    head->next->next->next->next->next->next = newNode(8);
    head->next->next->next->next->next->next->next = newNode(14);
    head->next->next->next->next->next->next->next->next = newNode(19);
    head->next->next->next->next->next->next->next->next->next = newNode(14);

    int key;
    cout << "Enter the key to search for: ";
    cin >> key; // User input for the key to search
    int comparisons = linkedListSearch(head, key);
    cout << "Number of comparisons in linked list: " << comparisons << endl;

    return 0;
}

