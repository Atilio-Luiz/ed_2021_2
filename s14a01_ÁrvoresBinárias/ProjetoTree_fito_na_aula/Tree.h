#ifndef TREE_H
#define TREE_H
#include <iostream>

struct Node {
    int key;        // valor a ser guardado
    Node *left;     // ponteiro para filho esquerdo
    Node *right;    // ponteiro para filho direito

    Node(int k, Node *l, Node *r) { // Construtor
        this->key = k;
        this->left = l;
        this->right = r;
    }
    
    ~Node() { // Destrutor
        std::cout << this->key << " removed" << std::endl; 
    }
};

enum class Position { LEFT, RIGHT };

class Tree {
public:
    // Construtor default: cria uma árvore binária vazia
    Tree() {
        root = nullptr;
    }

    // Construtor: cria uma árvore com um nó raiz 
    // contendo a chave passada como argumento
    Tree(int rootKey) {
        Node *ptr = new Node(rootKey, nullptr, nullptr);
        root = ptr;
    }

    // retorna true se a árvore está vazia 
    bool empty() {
        return root == nullptr;
    }

    // função pública: retorna true se e somente se 
    // a árvore contém a chave passada como argumento
    bool contains(int key) {
        return contains(root, key);
    }

    // Função pública
    // Imprime na tela todas as chaves da árvore
    void printKeys() {
        printKeys(root);
    }

    // Função pública que libera todos os nós
    // da árvore, deixando ela vazia
    void clear() {
        root = clear(root);
    }

    // função pública
    // adiciona na árvore a chave passada como argumento
    // o pai do novo nó será o nó com chave igual a 'parent'
    // e o novo nó será inserido à esquerda ou à direita
    // de acordo com o valor do parâmetro p.
    // Supõe que todas as chaves na árvore são distintas
    void add(int key, int parent, Position p) {
        if(root == nullptr) {
            root = new Node(key, nullptr, nullptr);
        }
        else {
            add(root, key, parent, p);
        }
    }

    // Destrutor: libera todos os nós
    // alocados dinamicamente
    ~Tree() {
        clear();
    }
private:
    Node *root;

    // versão recursiva: O(n) não é boa
    void add(Node *node, int key, int parent, Position p) {
        if(node == nullptr || node->key == key) {
            return;
        }
        if(node->key == parent && p == Position::LEFT) { // achei o pai!
            if(node->left != nullptr) return;
            node->left = new Node(key, nullptr, nullptr); 
            return; 
        }
        if(node->key == parent && p == Position::RIGHT) { // achei o pai
            if(node->right != nullptr) return; 
            node->right = new Node(key, nullptr, nullptr); 
            return;
        }
        add(node->left, key, parent, p);
        add(node->right, key, parent, p);
    }

    // função recursiva: recebe uma raiz de subárvore e uma chave
    // retorna true se e somente se a subárvore contém a chave
    bool contains(Node *node, int key) {
        if(node == nullptr) { // caso base
            return false;
        }
        else { // caso geral: árvore com pelo menos um nó
            return node->key == key || contains(node->left, key) ||
                   contains(node->right, key);
        }

    }

    // função recursiva: recebe uma raiz de subárvore como argumento
    // e imprime todas as chaves que estão naquela subárvore
    void printKeys(Node *node) {
        if(node != nullptr) { // caso geral
            std::cout << node->key << " "; // imprime a chave da raiz
            printKeys(node->left); // imprimir as chaves da subárvore esquerda
            printKeys(node->right); // imprimir as chaves da subárvore direita
        }
    }

    // Função recursiva: libera todos os nós descendentes de node. 
    // Ao final, retorna a raiz da árvore resultante = nullptr
    Node *clear(Node *node) {
        if(node != nullptr) { // Caso geral: existe uma raiz
            node->left = clear(node->left); 
            node->right = clear(node->right);
            delete node;  
        }
        return nullptr;
    }
};

#endif
