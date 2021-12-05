#ifndef NODE_H
#define NODE_H
#include <string>

// Define um tipo de dado chamado Item,
// que é apenas um apelido para std::string
// Deste modo, nossos nós pdoerão guardar strings
typedef std::string Item;

struct Node {
    Item data;   // data 
    Node *next;  // pointer to next node

    // Constructor, initializes node data
    Node(const Item& k, Node *nextnode = nullptr) {
        data = k;
        next = nextnode;
    }
};

#endif