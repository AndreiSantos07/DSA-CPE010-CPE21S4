#ifndef NODES_H
#define NODES_H

template <typename T>
struct Node {
    T data; // Node's data
    Node* next; // Pointer to the next node

    // Constructor to initialize the node
    Node(T value) : data(value), next(NULL) {}
};

// Function to create a new node
template <typename T>
Node<T>* new_node(T value) {
    return new Node<T>(value);
}

#endif // NODES_H

