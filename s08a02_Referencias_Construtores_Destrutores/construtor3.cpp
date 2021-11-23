#include <iostream> // construtor3.cpp

class Ponto {
    private:
        double x;
        double y;
    public:  
        // Construtor sem argumentos 
        // que chama outro construtor  
        Ponto() 
            : Ponto(-1,-1) { }
        
        // usando lista inicializadora de membros
        Ponto(double X, double Y) 
            : x(X), y(Y)  
            { 
                std::cout << "(" << x << "," << y << ")\n"; 
            }
};

int main() {
    Ponto p { 2.3, 4.5 }; 
    Ponto p2;
}
