#include <iostream> // construtor4.cpp

class Ponto { // tridimensional
    private:
        double x;
        double y;
        double z;
    public:          
        // permite alguns argumentos nao serem fornecidos
        Ponto(double X = 0, double Y = 0, double Z = 0) 
            : x(X), y(Y), z(Z)  
            { 
                std::cout << "(" << x << "," << y << 
                             "," << z << ")\n"; 
            }
};

int main() {
    Ponto p1 { 4, 5, 7 };
    Ponto p2 { 4, 5 }; 
    Ponto p3 { 4 };
    Ponto p4;
}
