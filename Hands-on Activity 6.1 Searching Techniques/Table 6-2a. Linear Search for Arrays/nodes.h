// nodes.h
#ifndef NODES_H
#define NODES_H

template <typename T>
class Node {
public:
    T data;
    Node* next;
};

// Function to create a new node and return
template <typename T>
Node<T>* new_node(T newData) {
    Node<T>* newNode = new Node<T>;
    newNode->data = newData;
    newNode->next = NULL;
    return newNode;
}

#endif // NODES_H

