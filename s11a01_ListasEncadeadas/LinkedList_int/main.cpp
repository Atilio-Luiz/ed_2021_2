#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
    LinkedList list; // cria lista vazia

    for(int i = 1; i <= 10; ++i) // insere 1..10
        list.push_back(i);

    cout << list << endl; // imprime lista na tela

    for(int i = 0; i < list.size(); ++i) 
        list[i] *= 2; // dobra cada valor
    
    cout << list << endl; // imprime lista na tela

    list.clear(); // esvazia a lista
    cout << list << endl; // imprime lista na tela
}