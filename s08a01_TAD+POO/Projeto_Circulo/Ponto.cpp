#include <iostream>
#include <cmath>
#include "Ponto.h"

struct Ponto {
    double x;
    double y;
};

// Aloca e retorna um ponto com coordenadas (x,y)
Ponto *pto_cria(double x, double y) {
    Ponto *p = new (std::nothrow) Ponto();
    if(p == nullptr) {
        std::cout << "Erro: nao foi possivel alocar Ponto" << std::endl;
    }
    p->x = x;
    p->y = y;
    return p;
}

// Libera a memoria de um ponto previamente criado
void pto_libera(Ponto* p) {
    if(p != nullptr) {
        delete p;
    }
}

// Retorna os valores das coordenadas de um ponto
// nos parametros x e y
void pto_acessa(Ponto *p, double* x, double *y) {
    *x = p->x;
    *y = p->y;
}

// Atribui novos valores as coordenadas de um ponto
void pto_atribui(Ponto *p, double x, double y) {
    p->x = x;
    p->y = y;
}

// Retorna a distancia entre dois pontos
double pto_distancia(Ponto* p1, Ponto* p2) {
    double dx = p1->x - p2->x;
    double dy = p1->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}