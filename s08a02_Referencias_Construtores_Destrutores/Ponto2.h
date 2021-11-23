#ifndef PONTO_H
#define PONTO_H
#include <iostream>
#include <cmath>
using namespace std;

class Ponto {
private:
    double x;
    double y;
public:
    // Construtor
    Ponto() {
        this->x = 0;
        this->y = 0;
    }
        
    Ponto(double X, double Y = 0) {
        this->x = X;
        this->y = Y;
    }

    // Destrutor
    ~Ponto() {
        cout << "Ponto destruido" << x << "," << y << endl; 
    }

    // Getters
    double getX() { return x; }
    double getY() { return y; } 

    // Setters
    void setX(double X) { x = X; }
    void setY(double Y) { y = Y; }

    // Calcula a distancia entre dois pontos:
    // Entre o ponto que chamou essa funcao 
    // e o ponto p passado como parametro 
    double distancia(Ponto p) {
        double dx = this->x - p.x;
        double dy = this->y - p.x;
        return sqrt(dx*dx + dy*dy);
    }
};

#endif
