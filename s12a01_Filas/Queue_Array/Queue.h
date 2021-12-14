#ifndef QUEUE_ARRAY
#define QUEUE_ARRAY
#include <iostream>

template <typename Item>
class Queue {
private: 
    Item *array; // ponteiro para vetor de Item
    int m_size; // Qtd de elementos na Fila
    int capacity; // Capacidade total da Fila
    int first; // Indice do primeiro elemento
public:
    // Construtor
    Queue(int capacity) {
        array = new (std::nothrow) Item[capacity];
        if(array == nullptr) {
            throw std::runtime_error("erro: memória não disponível");
        }
        m_size = 0;
        this->capacity = capacity;
        first = 0;
    }

    // Destrutor
    ~Queue() {
        delete[] array;
    }

    // Adiciona na fila
    void push_back(const Item& data) {
        if(full()) {
            throw std::runtime_error("erro: fila cheia");
        }
        int fim = (first + m_size) % capacity;
        array[fim] = data;
        m_size++;
    } 

    // Remove da fila
    void pop_front() {
        if(empty()) {
            throw std::runtime_error("erro: fila vazia");
        }
        first = (first + 1) % capacity;
        m_size--;
    }

    // A fila esta vazia?
    bool empty() const {
        return m_size == 0;
    }

    // A fila esta cheia?
    bool full() const {
        return m_size == capacity;
    };

    // tamanho da fila
    int size() const {
        return m_size;
    } 

    // Valor do elemento na cabeca
    Item& front() {
        if(empty()) {
            throw std::runtime_error("erro: fila vazia");
        }
        return array[first];
    }

    // valor do elemento na cauda
    Item& back() {
        if(empty()) {
            throw std::runtime_error("erro: fila vazia");
        }
        int fim = (first + m_size - 1) % capacity;
        return array[fim];
    }
};

#endif
