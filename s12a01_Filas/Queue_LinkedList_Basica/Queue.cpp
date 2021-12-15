/**
 * Implementacao de uma Fila usando lista 
 * simplesmente encadeada sem no cabeca
 */
#include <iostream>
#include <stdexcept>
#include "Node.h"
#include "Queue.h"

// Construtor
Queue::Queue() {
    first = last = nullptr;
}

// Destrutor
Queue::~Queue () {     
    while (first != nullptr) {
        Node *temp = first;
        first = first->next;
        delete temp;
    }
}

// Devolve 'true' se a lista estiver vazia; 
// e devolve 'false' caso contrario
bool Queue::empty() const { 
    return first == nullptr;
}

// Devolve o número de elementos na fila
int Queue::size() const { 
    int total = 0;
    Node *temp = first;
    while(temp != nullptr) {
        total++;
        temp = temp->next;
    }
    return total;
}

// A funçao push_back insere um novo elemento na fila
// Cada novo elemento é inserido no final da fila
void Queue::push_back(const Item& data) { 
    Node *novo = new Node(data, nullptr);
    // verifica se fila não está vazia
    if (last != nullptr) 
        last->next = novo;
    else    // fila está vazia
        first = novo;
    last = novo;
}

// Esta função devolve o último elemento da fila
// ou lança uma exceção se a fila estiver vazia.
void Queue::pop_front() {
    if (empty()) 
        throw std::overflow_error("erro: fila vazia");
    
    Node *temp = first;
    first = temp->next;
    // verifica se a fila ficou vazia
    if (first == nullptr) 
        last = nullptr;
    delete temp;
}

// Devolve uma referência para o primeiro elemento 
// da lista. Esta operação não remove o elemento.
Item& Queue::front() { 
    if (first == nullptr)
        throw std::overflow_error("erro: fila vazia");
    return first->data;
}

// Devolve uma referência para o último elemento 
// da lista. Esta operação não remove o elemento.
Item& Queue::back() {
    if (last == nullptr)
        throw std::overflow_error("erro: fila vazia");
    return last->data;
}

