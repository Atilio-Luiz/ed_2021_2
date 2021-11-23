#include <iostream> // construtor.cpp

class Ponto {
    private:
        double x;
        double y;
    public:
        Ponto(double X, double Y) {
            x = X;
            y = Y;
        }
        
        // construtor sem argumentos
        Ponto() {
            x = y = 0.0; 
        }
};

int main() {
    // Instanciando um objeto chamando o construtor
    Ponto p { 2.3, 4.5 }; 
    Ponto p2;
}
