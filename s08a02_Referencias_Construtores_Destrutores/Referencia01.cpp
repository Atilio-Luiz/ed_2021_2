#include <iostream> // Referencia01.cpp
using namespace std;

int main() {
    int x = 45;
    int y = 7;

    int& ref = x; // criação de uma referência

    cout << ref << endl; // posso usar ref no lugar de x

    ref = 67; // muda o valor de x para 67

    cout << x << endl; // x mudou de valor ----> 67
}