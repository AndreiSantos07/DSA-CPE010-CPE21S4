#ifndef NODES_H
#define NODES_H

template <typename T>
struct Node {
    T data;
    Node* next;

    Node(T value) : data(value), next(NULL) {}
};

template <typename T>
Node<T>* new_node(T value) {
    return new Node<T>(value);
}

#endif // NODES_H

