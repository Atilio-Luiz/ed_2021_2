#include <iostream> // destrutor.cpp

class Ponto {
private:
    double x;
    double y;
        
public:
    Ponto(double X, double Y) { 
        x = X;
        y = Y;
        std::cout << "Ponto construido" << std::endl;
    }

    // Destrutor (note o til antes do nome da funcao)
    ~Ponto() {
        std::cout << "Ponto destruido" << std::endl; 
    }

    double getX() { return x; } // getters
    double getY() { return y; } // getters

    void setX(double x) { this->x = x; } // setters
    void setY(double y) { this->y = y; } // setters
};

int main() {
    // Instanciando um objeto chamando o construtor
    Ponto p { 2.3, 4.5 }; 
    p.setX(56);
    std::cout << p.getX() << "," << p.getY() << std::endl; // 56,4.5
    return 0;
}
