#include <iostream>
#include "Ponto.h"
#include "Circulo.h"

using namespace std;

int main() {
    Ponto *p = pto_cria(0.5,0.5);
    Circulo *c = circ_cria(1, pto_cria(0,0));

    if(circ_interior(c, p)) {
        cout << "O ponto está no interior do círculo" << endl;
    }
    else {
        cout << "O ponto não está no interior do círculo" << endl;
    }

    cout << "A área do círculo é igual a: " << circ_area(c) << endl;

    pto_libera(p);
    circ_libera(c);
    return 0;
}