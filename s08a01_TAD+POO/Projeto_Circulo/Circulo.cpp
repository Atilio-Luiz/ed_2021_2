#include <iostream>
#include <cmath>

#include "Ponto.h"
#include "Circulo.h"

struct Circulo {
    double raio;
    Ponto *centro;
};

// Cria um círculo cujo centro é um atributo
// do tipo Ponto e raio é um float;
Circulo *circ_cria(double raio, Ponto *centro) {
    Circulo *c = new Circulo();
    c->raio = raio;
    c->centro = centro;
    return c;
}

// atribui um novo valor ao raio do circulo
void circ_setRaio(Circulo *c, double r) {
    c->raio = r;
}

// obtém o raio
double circ_getRaio(Circulo *c) {
    return c->raio;
}

// obtém o centro do círculo
Ponto *circ_getCentro(Circulo *c) {
    return c->centro;
}

// Calcula a área do circulo
double circ_area(Circulo *c) {
    return M_PI * c->raio * c->raio;
}

// verifica se um ponto está no interior do circulo
bool circ_interior(Circulo *c, Ponto *p) {
    double dist = pto_distancia(c->centro, p);
    if(dist <= c->raio) {
        return true;
    }
    else {
        return false;
    }
}

// libera memória alocada para o Círculo
void circ_libera(Circulo *p) {
    if(p != nullptr) {
        delete p;
    }
}