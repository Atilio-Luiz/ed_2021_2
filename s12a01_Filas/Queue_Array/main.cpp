#include <iostream>
#include "Queue.h"
using namespace std;
const int MAX = 10;

int main() {
    Queue<double> fila(MAX);

    for (int i = 1; i <= 50; i++)
        if(!fila.full())
            fila.push_back(i);  // enfileirando

    while (!fila.empty()) { 
        cout << fila.front() << endl;
        fila.pop_front();
    }

}
