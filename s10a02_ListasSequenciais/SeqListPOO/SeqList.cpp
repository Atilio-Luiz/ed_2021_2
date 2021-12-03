#include <iostream>
#include <stdexcept>
#include "SeqList.h"

using namespace std;

// Construtor
SeqList::SeqList(int capacity) { // O(1)
    m_capacity = capacity;
    m_size = 0;
    m_array = new int[m_capacity];
}

// Copy constructor
SeqList::SeqList(const SeqList& list) {
    m_capacity = list.m_capacity;
    m_size = list.m_size;
    m_array = new int[m_capacity];
    for(int i = 0; i < m_size; i++) {
        m_array[i] = list.m_array[i];
    }
}

// Destrutor
SeqList::~SeqList() { // O(1)
    delete[] m_array;
}

// Limpa a lista deixando-a vazia, com zero elementos
void SeqList::clear() { // O(1)
    m_size = 0; 
}

// Retorna true se e somente se a lista estiver cheia
bool SeqList::full() const { // O(1)
   return (m_capacity == m_size);
}

// Adiciona um elemento ao final da lista
void SeqList::push_back(int elemento) { // O(1)
    if(full()) {
        return;
    }
    m_array[m_size] = elemento;
    m_size++;
}

// -- tarefa de casa: implementar esta função-membro
// Adiciona o elemento na posição i da lista 
// Se não tiver mais posições disponíveis, retorna sem fazer nada.
void SeqList::insert(int elemento, int i) {
    // TODO
}

// Retorna o tamanho (o número de elementos atualmente) da lista
int SeqList::size() const { // O(1)
    return m_size;
}

// Retorna a capacidade total da lista
int SeqList::capacity() const { // O(1)
    return m_capacity;
}

// Retorna uma referência para o elemento na primeira posição
int& SeqList::front() { // O(1)
    if(m_size == 0) { // lista vazia: erro
        throw new std::runtime_error("fail: fila vazia");
    }
    return m_array[0];
}

// Retorna uma referência para o elemento na última posição
int& SeqList::back() { // O(1)
    if(m_size == 0) { // lista vazia: erro
        throw new std::runtime_error("fail: fila vazia");
    }
    return m_array[m_size-1];
}

void SeqList::check_range(int i) const {
    if(i < 0 || i >= m_size) { // O(1)
        throw new std::runtime_error("fail: índice fora do intervalo");
    }
}

// Retorna o valor do elemento no índice i
int SeqList::get(int i) const {
    check_range(i); // O(1)
    return m_array[i];
}

// Remove o elemento no índice i
void SeqList::remove(int i) { // O(n)
    check_range(i);
    for(int k = i; k <= m_size-2; k++) {
        m_array[k] = m_array[k+1];
    }
    m_size--;
}

// Remove o elemento na última posição da lista - tarefa de casa
void SeqList::remove_back() {
    // TODO
}

// Remove o elemento na primeira posição da lista - tarefa de casa
void SeqList::remove_front() {
    // TODO
}

// Remove todas as ocorrências do elemento na lista - tarefa de casa
void removeAll(int elemento) {
    // TODO
}

// operador[] sobrecarregado como uma função-membro da classe SeqList
int& SeqList::operator[](int index) { // O(1)
    check_range(index);
    return m_array[index];
}

// operador<< sobrecarregado como uma função global usando friend
std::ostream& operator<<(std::ostream& out, const SeqList& list) { // O(n)
    out << "[ ";
    for(int i = 0; i < list.size(); i++) {
        out << list.m_array[i] << " ";
    }
    out << "]";
    return out;
}

// operador= sobrecarregado como uma função-membro da classe SeqList
const SeqList& SeqList::operator=(const SeqList& list) {
    if(this != &list) { // evita auto-atribuição
        if(m_capacity != list.m_capacity) {
            delete[] m_array;
            m_capacity = list.m_capacity;
            m_array = new int[m_capacity];
        }
        m_size = list.m_size;
        for(int i = 0; i < list.m_size; i++) {
            m_array[i] = list.m_array[i];
        }
    }
    return *this;
}
