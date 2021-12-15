#ifndef STACK_H
#define STACK_H
#include <stdexcept>
#include <iostream>

template <typename Item>
class Stack {
private: 
    Item *vec; // Ponteiro para um vetor de Item
    int m_top; // Posicao do proximo slot disponivel
    int capacity; // Tamanho total do vetor
public: 
    // Construtor
    Stack(int capacity) {
        m_top = 0;
        this->capacity = capacity;
        vec = new (std::nothrow) Item[capacity];
        if(vec == nullptr) {
            throw std::runtime_error("erro: memória indisponível");
        }
    } 
    // Destrutor
    ~Stack() {
        delete[] vec;
    }
    // Inserir no topo
    void push(const Item& data) {
        if(full()) {
            throw std::runtime_error("erro : pilha cheia");
        }
        vec[m_top] = data;
        m_top++;
    }
    // Remover elemento do topo
    void pop() {
        if(empty()) {
            throw std::runtime_error("erro: pilha vazia");
        }
        m_top--;
    }
    // Consulta elemento no topo
    Item& top() {
        if(empty()) {
            throw std::runtime_error("erro: pilha vazia");
        }
        return vec[m_top-1];
    }
    // Pilha esta vazia?
    bool empty() const {
        return m_top == 0;
    }
    // Pilha esta cheia?
    bool full() const {
        return m_top == capacity;
    } 
    // Tamanho atual da pilha
    int size() const {
        return m_top;
    }
};

#endif
