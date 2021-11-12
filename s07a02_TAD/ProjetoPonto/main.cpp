#include <iostream>
#include "Ponto.h"
using namespace std;

int main() {
    Ponto *p1 = pto_cria(34.5, 67.0);
    Ponto *p3 = pto_cria(0, 2);

    double xx;
    double yy;
    pto_acessa(p1, &xx, &yy);
    cout << "As coordenadas do ponto são: " << xx << "," << yy << endl;

    cout << "Distancia: " << pto_distancia(p1,p3) << endl;

    pto_libera(p1);
    pto_libera(p3);
    return 0;
}