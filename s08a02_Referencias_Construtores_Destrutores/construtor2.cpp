#include <iostream> // construtor2.cpp

class Ponto {
    private:
        double x;
        double y;
    public:
        // usando lista inicializadora de membros
        Ponto(double X, double Y) 
            : x(X), y(Y)  { }
        
        // construtor sem argumentos   
        Ponto()
            : Ponto(9,-100) 
        {   
            std::cout << x << "," << y << std::endl;
        }
};

int main() {
    // Instanciando um objeto chamando o construtor 
    Ponto p2;
}
