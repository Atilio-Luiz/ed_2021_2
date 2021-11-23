#include <iostream> // Referencia02.cpp
using namespace std;

void troca(int& x, int& y) {
    int aux = x;
    x = y;
    y = aux;
}

int main() {
    int a = 45;
    int b = 67;

    troca(a,b); 

    cout << "a: " << a << endl; // imprime 67
    cout << "b: " << b << endl; // imprime 45
}