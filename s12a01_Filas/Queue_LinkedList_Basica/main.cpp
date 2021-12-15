#include <iostream>
#include "Queue.h"  // inclui biblioteca
using namespace std;

int main() {
    Queue fila; // cria fila vazia

    for(int i = 1; i <=9; i++)
        fila.push_back(i);  // enfileira

    while(!fila.empty()) {
        cout << fila.front() << endl;
        fila.pop_front();
    }

}
