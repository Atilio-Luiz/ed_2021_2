#include <iostream> // Referencia04.cpp
using namespace std;

// Código inválido
int& getLocalVariable() {
    int x = new int;
    x = 45;
    return x;
}

int main() {
    cout << getLocalVariable() << endl;
}