#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main() {
    Stack<string> pilha;
    Stack<Stack<int>> pilha2;

    for(int i = 1; i <= 10; i++) {  
        pilha.push("ana");       
    }

    while(!pilha.empty()) {
        cout << pilha.top() << endl;
        pilha.pop();
    }

    return 0;
}