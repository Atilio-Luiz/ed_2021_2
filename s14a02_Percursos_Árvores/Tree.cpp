/**
 * @date Atualizado no dia 14/01/2022
 * @author Atilio Luiz
 */
#include <iostream>
#include <stack>
#include <queue>
#include "Tree.h"

// Construtor default: cria uma árvore binária vazia
Tree::Tree() {
    root = nullptr;
}

// Construtor: cria uma árvore com um nó raiz 
// contendo a chave passada como argumento
Tree::Tree(int rootKey) {
    root = new Node(rootKey, nullptr, nullptr);
}

// retorna true se a árvore está vazia 
bool Tree::empty() {
    return root == nullptr;
}

// função pública: retorna true se e somente se 
// a árvore contém a chave passada como argumento
bool Tree::contains(int key) {
    contains(root, key);
}

bool Tree::contains(Node *node, int key) {
    if(node == nullptr)
        return false; // Sub-arvore vazia
    else 
        return node->key == key || 
               contains(node->left, key) || 
               contains(node->right, key);
}

// Função pública
// Imprime na tela todas as chaves da árvore
void Tree::printKeys() {
    printKeys(root);
}

// Função recursiva
void Tree::printKeys(Node *node) {
    if(node != nullptr) {
        std::cout << node->key << std::endl;
        printKeys(node->left);
        printKeys(node->right);
    }
}
    
// Função pública que libera todos os nós
// da árvore, deixando ela vazia
void Tree::clear() {
    root = clear(root);
}

// Função recursiva que libera todos os nós da árvore. 
// Ao final, retorna a raiz da árvore resultante = nullptr
Node *Tree::clear(Node *node) {
    if(node != nullptr) {
        node->left = clear(node->left); // delete esquerda
        node->right = clear(node->right); // delete direita
        delete node; // delete pai
    }
    return nullptr;
}

// Destrutor: libera todos os nós
// alocados dinamicamente
Tree::~Tree() {
    clear();
}

// função pública
// adiciona na árvore a chave passada como argumento
// o pai do novo nó será o nó com chave igual a 'parent'
// e o novo nó será inserido à esquerda ao à direita
// de acordo com o valor do parâmetro pos.
// Supõe que todas as chaves na árvore são distintas
void Tree::add(int key, int parent, Position pos){ 
    if(root == nullptr) {
        root = new Node(key, nullptr, nullptr);
    }
    else add(root, key, parent, pos);
}

// Função recursiva: O(n) não é boa
void Tree::add(Node *node, int key, int parent, Position p) {
    if(node->key == key) return;
    if(node->key == parent && p == Position::LEFT) {
        if(node->left != nullptr) return;
        Node *novo = new Node(key, nullptr, nullptr);
        node->left = novo;
        return;
    }
    if(node->key == parent && p == Position::RIGHT) {
        if(node->right != nullptr)  return;
        Node *novo = new Node(key, nullptr, nullptr);
        node->right = novo;
        return;
    }
    if(node->left != nullptr) 
        add(node->left, key, parent, p);
    if(node->right != nullptr) 
        add(node->right, key, parent, p);
}

void Tree::preOrdem() {
    preOrdem(root);
}

void Tree::ordemSimetrica() {
    ordemSimetrica(root);
}

void Tree::posOrdem() {
    posOrdem(root);
}

void Tree::preOrdem(Node *node) {
    if(node != nullptr) { 
        std::cout << node->key << " "; // visita a raiz
        preOrdem(node->left);
        preOrdem(node->right);
    }
}

void Tree::ordemSimetrica(Node *node) {
    if(node != nullptr) { 
        ordemSimetrica(node->left);
        std::cout << node->key << " "; // visita a raiz
        ordemSimetrica(node->right);
    }
}

void Tree::posOrdem(Node *node) {
    if(node != nullptr) { 
        posOrdem(node->left);
        posOrdem(node->right);
        std::cout << node->key << " "; // visita a raiz
    }
}

void Tree::ordemSimetricaIterativa() {
    std::stack<Node*> pilha;
    Node *node = root;

    while(!pilha.empty() || node != nullptr) {
        if(node != nullptr) {
            pilha.push(node);
            node = node->left;
        }
        else {
            node = pilha.top();
            pilha.pop();
            std::cout << node->key << " ";
            node = node->right;
        }
    }
}

void Tree::preOrdemIterativa() {
    std::stack<Node*> pilha; // cria pilha vazia
    pilha.push(root); // empilha raiz

    while(!pilha.empty()) {
        Node *node = pilha.top();
        pilha.pop();
        if(node != nullptr) {
            std::cout << node->key << " "; // visita raiz
            pilha.push(node->right);
            pilha.push(node->left);
        }
    }
}

void Tree::levelTraversal() {
    std::queue<Node*> fila; // cria fila vazia
    fila.push(root); // enfileira a raiz na fila

    while (!fila.empty()) {
        Node *node = fila.front();
        fila.pop();
        if (node != nullptr) {
            fila.push(node->left);
            fila.push(node->right);
            std::cout << node->key << " "; // visita raiz
        }
    }
}


