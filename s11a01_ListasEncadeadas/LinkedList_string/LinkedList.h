#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Node.h"

class LinkedList {
private:
    Node* m_head; // ponteiro para o primeiro elemento
    int m_size;   // número de elementos na lista
public:
    LinkedList();
    bool empty();
    void clear();
    int size();
    void push_back(Item data);
    void pop_back();
    void insert(int index, Item data);
    void remove(int index);
    ~LinkedList();
    Item& operator[](int index);
    friend std::ostream& operator<<(std::ostream& out, const LinkedList& l);  
};

#endif