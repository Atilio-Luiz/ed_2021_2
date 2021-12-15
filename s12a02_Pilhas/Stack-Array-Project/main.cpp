#include <iostream>
#include <vector>
#include "Stack.h"
using namespace std;

int main() {
    Stack<double> pilha(10);

    int i = 1;
    while(!pilha.full()) {
        pilha.push(i * 7.8);
        i++;
    }

    while(!pilha.empty()) {
        cout << pilha.top() << endl;
        pilha.pop();
    }

    return 0;
}