#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"

/**
 * Classe 'Circle' que implementa um círculo
 */
class Circle {
private:
    /**
     * Declaração dos atributos do círculo
     */
    double radius; // o raio do círculo
    Point center; // o centro do círculo
    
public:
    // Construtor default
    Circle() {
        // TODO
    }

    // Construtor com dois argumentos
    Circle(Point& center, double radius) {
        // TODO
    }

    // getters
    Point getCenter() {
        // TODO
    }
    double getRadius() {
        // TODO
    }
    
    // setters
    void setRadius(double radius) {
        // TODO
    }
    void setCenter(double x, double y) {
        // TODO
    }
    void setCenter(Point& center) {
        // TODO
    }

    // Operação que calcula a área do círculo
    double area() {
        // TODO
    }

    // Operação que verifica se um dado ponto p dado 
    // como entrada está ou não dentro do círculo
    bool interior(Point& p) {
        // TODO
    }

    // Retorna uma string com os dados do círculo
    std::string toString() {
        // TODO
    }
};

#endif