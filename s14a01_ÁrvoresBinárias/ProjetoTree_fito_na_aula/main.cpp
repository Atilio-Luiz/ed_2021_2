/**
 * Programa Cliente para testar Árvore Binária
 */
#include <iostream>
#include "Tree.h"
using namespace std;

// Cria árvore com 5 nós, imprime chaves e finaliza
// liberando a memória que foi alocada para a árvore
int main()
{
    Tree t(1); // Cria árvore com nó raiz de chave 1
    t.add(76, 1, Position::LEFT);
    t.add(55, 1, Position::RIGHT);
    t.add(21, 76, Position::RIGHT);
    t.add(34, 76, Position::LEFT);

    t.printKeys();
    cout << endl;

    if(t.contains(21)) {
        cout << "contém 21" << endl;
    }
    else {
        cout << "não contém 21" << endl;
    }

    if(t.contains(555)) {
        cout << "contém 555" << endl;
    }
    else {
        cout << "não contém 555" << endl;
    }

    return 0;
}
