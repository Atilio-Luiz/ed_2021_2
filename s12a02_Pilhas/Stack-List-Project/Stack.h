#ifndef STACK_H
#define STACK_H
#include <stdexcept>
#include <iostream>

template <typename Item>
struct Node {
    Item data;
    Node *next;

    Node(const Item& data, Node *ptr) {
        this->data = data;
        this->next = ptr;
    }
};

template <typename Item>
class Stack {
private: 
    Node<Item>* m_top; // Ponteiro para o topo da pilha
public: 
    // Construtor
    Stack() {
        m_top = nullptr; // pilha vazia
    }
    // Destrutor
    ~Stack() {
        while(m_top != nullptr) {
            Node<Item> *temp = m_top;
            m_top = m_top->next;
            delete temp;
        }
    }
    // Inserir no topo
    void push(const Item& data) {
        Node<Item> *novo = new Node<Item>(data, m_top);
        m_top = novo;
    }
    // Remover elemento do topo
    void pop() {
        if(empty()) {
            throw std::runtime_error("erro: pilha vazia");
        }
        Node<Item> *temp = m_top;
        m_top = m_top->next;
        delete temp;
    } 
    // Consulta o elemento no topo
    Item& top() {
        if(empty()) {
            throw std::runtime_error("erro: pilha vazia");
        }
        return m_top->data;
    }
    // Devolve tamanho da pilha
    int size() const {
        int contador = 0;
        Node<Item> *temp = m_top;
        while(temp != nullptr) {
            contador++;
            temp = temp->next;
        }
        return contador;
    }
    // Pilha esta vazia?
    bool empty() const {
        return m_top == nullptr;
    }
};

#endif
