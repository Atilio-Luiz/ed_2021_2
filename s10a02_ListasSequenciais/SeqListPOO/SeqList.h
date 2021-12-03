#ifndef SEQLIST_H
#define SEQLIST_H
#include <iostream>

/**
 * Classe SeqList, que encapsula uma lista linear de inteiros.
 * A lista linear é implementada usando alocação dinâmica sequencial.
 * Para isso, a estrutura usada como base é um array de inteiros.
 */
class SeqList {
private:
    int m_capacity; // capacidade total da lista
    int m_size;     // numero de elementos na lista
    int* m_array;   // ponteiro para o array de inteiros 

    // Função privada que checa se o índice i passado como argumento
    // está dentro do intervalo válido
    // Lança uma exceção caso o índice esteja fora do intervalo.
    void check_range(int i) const;

public:
    // Construtor
    SeqList(int capacity);

    // Copy constructor
    SeqList(const SeqList& list);

    // Destrutor
    ~SeqList();

    // Limpa a lista deixando-a vazia, com zero elementos
    void clear();

    // Retorna true se e somente se a lista estiver cheia
    bool full() const;

    // Adiciona um elemento ao final da lista
    void push_back(int elemento);

    // Adiciona o elemento na posição i da lista
    void insert(int elemento, int i);

    // Retorna o tamanho da lista
    int size() const;

    // Retorna a capacidade total da lista
    int capacity() const;

    // Retorna uma referência para o elemento na primeira posição
    int& front();

    // Retorna uma referência para o elemento na última posição
    int& back();

    // Retorna o valor do elemento no índice i
    int get(int i) const;

    // Remove o elemento no índice i
    void remove(int i);

    // Remove o elemento na última posição da lista - tarefa de casa
    void remove_back();

    // Remove o elemento na primeira posição da lista - tarefa de casa
    void remove_front();

    // Remove todas as ocorrências do elemento na lista
    void removeAll(int elemento);

    // operador[] sobrecarregado como uma função-membro da classe SeqList
    int& operator[](int index);
    
    // operador<< sobrecarregado como uma função global usando friend
    friend std::ostream& operator<<(std::ostream& out, const SeqList& list);

    // operador= sobrecarregado como uma função-membro da classe
    const SeqList& operator=(const SeqList& list);
};

#endif