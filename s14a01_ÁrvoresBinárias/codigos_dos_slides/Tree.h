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
    ~Tree();
private:
    Node *root;
    void add(Node *root, int key, int parent, Position p);
    bool contains(Node *root, int key);
    void printKeys(Node *root);
    Node *clear(Node *root);
};

#endif
