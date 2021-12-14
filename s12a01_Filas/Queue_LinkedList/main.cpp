#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;

int main() {
    Queue<string> f2;
    f2.push_back("ceara");
    cout << f2.front() << endl;

    Queue<long> fila;

    for(int i = 298; i <= 305; ++i) {
        fila.push_back(i); // 1 2 3 4 5 6 7 8 9 10
    }

    cout << "primeiro: " << fila.front() << endl; // 1
    cout << "último: " << fila.back() << endl; // 10
    cout << "tamanho: " << fila.size() << endl; // 10

    while(!fila.empty()) {
        cout << fila.front() << " "; // 1 2 3 4 5 6 7 8 9 10
        fila.pop_front();
    }
    cout << endl;

    cout << "tamanho: " << fila.size() << endl; // 0

    if(!fila.empty())
        cout << "primeiro: " << fila.front() << endl;

    return 0;
}
