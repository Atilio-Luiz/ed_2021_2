#ifndef QUEUE_H
#define QUEUE_H
#include <stdexcept>


// Definição do struct Node
// usando templates
template < typename Item >
struct Node {
    Item data;  // guarda dado
    Node *next; // ponteiro para o próximo Node

    Node(const Item& d, Node *ptr) {
        data = d;
        next = ptr;
    }
};

template < typename Item >
class Queue {
private:
    Node<Item>* first; // ponteiro para o primeiro Node
    Node<Item>* last;  // ponteiro para o último Node
public:
    // Construtor
    Queue() {
        first = last = nullptr; // fila vazia
    }

    // Destrutor
    ~Queue() {
        while(first != nullptr) {
            Node<Item> *temp = first;
            first = first->next;
            delete temp;
        }
    }

    // Lista esta vazia?
    bool empty() const {
        return first == nullptr;
    } 

    // Devolve o tamanho da fila
    int size() const {
        int contador = 0;
        Node<Item> *temp = first;
        while(temp != nullptr) {
            contador++;
            temp = temp->next;
        }
        return contador;
    }

    // Insere dado no fim
    void push_back(const Item& data) {
        Node<Item> *novo = new Node<Item>(data, nullptr);
        if(first == nullptr) {
            first = last = novo;
        }
        else {
            last->next = novo;
            last = novo;
        }
    }

    // Remove dado do início
    void pop_front() {
        if(empty()) {
            throw std::overflow_error("erro no pop_front: fila vazia");
        }
        Node<Item> *temp = first;
        first = first->next;
        delete temp;
        if(first == nullptr)
            last = nullptr;
    }

    // Devolve valor do 1o elemento.
    Item& front() {
        if(empty()) {
            throw std::runtime_error("erro no front: fila vazia");
        }
        return first->data;
    }

    // Devolve valor do último elemento.
    Item& back() {
        if(empty()) {
            throw std::runtime_error("erro no front: fila vazia");
        }
        return last->data;
    }
};

#endif
