/**
 * @date Atualizado no dia 14/01/2022
 * @author Atilio Luiz
 */
#ifndef TREE_H
#define TREE_H

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
    Tree();
    Tree(int rootKey);
    void add(int key, int parent, Position p);
    bool contains(int key);
    bool empty();
    void printKeys();
    void clear();
    void preOrdem();
    void posOrdem();
    void ordemSimetrica();
    void ordemSimetricaIterativa();
    void preOrdemIterativa();
    void levelTraversal();
    ~Tree();
private:
    Node *root;
    void add(Node *root, int key, int parent, Position p);
    bool contains(Node *root, int key);
    void printKeys(Node *root);
    Node *clear(Node *root);
    void preOrdem(Node *node);
    void posOrdem(Node *node);
    void ordemSimetrica(Node *node);
};

#endif
