#ifndef NODE_H
#define NODE_H

typedef int Item;

// Definição do struct Node
struct Node {
    Item data;  // guarda dado
    Node *next; // ponteiro para o próximo Node

    Node(const Item& d, Node *ptr) {
        data = d;
        next = ptr;
    }
};

#endif