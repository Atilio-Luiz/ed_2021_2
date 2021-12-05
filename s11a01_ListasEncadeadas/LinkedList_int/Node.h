#ifndef NODE_H
#define NODE_H

typedef int Item;

struct Node {
    Item data;   // data 
    Node *next;  // pointer to the next node

    // Constructor: initializes node's data
    Node(const Item& k, Node *nextnode = nullptr) {
        data = k;
        next = nextnode;
    }
};

#endif
