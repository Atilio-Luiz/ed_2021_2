#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"

class Queue {
private:
    Node* first; // ponteiro para o primeiro Node
    Node* last;  // ponteiro para o último Node
public:
    Queue(); // Construtor
    ~Queue(); // Destrutor
    bool empty() const; // Lista esta vazia?
    int size() const; // Devolve o tamanho da fila
    void push_back(const Item&); // Insere dado no fim
    void pop_front(); // Remove dado do início
    Item& front(); // Devolve valor do 1o elemento.
    Item& back(); // Devolve valor do último elemento.
};

#endif
