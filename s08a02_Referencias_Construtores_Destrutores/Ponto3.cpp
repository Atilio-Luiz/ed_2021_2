#include <iostream>
#include <cmath>
#include "Ponto3.h"

Ponto::Ponto() {
    this->x = 0;
    this->y = 0;
}

Ponto::Ponto(double X, double Y) {
    this->x = X;
    this->y = Y;
}

Ponto::~Ponto() {
    std::cout << "Ponto destruido" << std::endl; 
}

double Ponto::getX() { return x; }
double Ponto::getY() { return y; } 

void Ponto::setX(double X) { x = X; }
void Ponto::setY(double Y) { y = Y; }

double Ponto::distancia(Ponto p) {
    double dx = x - p.x;
    double dy = y - p.y;
    return sqrt(dx*dx + dy*dy);
}


