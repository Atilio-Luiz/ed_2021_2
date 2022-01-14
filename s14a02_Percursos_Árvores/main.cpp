/**
 * Programa Cliente para testar Árvore Binária
 * @date Atualizado no dia 14/01/2022
 * @author Atilio Luiz 
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

    t.preOrdem();
    cout << endl;

    t.preOrdemIterativa();
    cout << endl;

    t.ordemSimetrica();
    cout << endl;

    t.ordemSimetricaIterativa();
    cout << endl;

    t.posOrdem();
    cout << endl;

    t.levelTraversal();
    cout << endl;

    return 0;
}
