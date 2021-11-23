#include <iostream> // main2.cpp
#include "Ponto2.h"
using namespace std;

int main() {
    Ponto p1 { 2.3, 4.5 };
    Ponto p2 { 4, 7.8 };
    Ponto p3 = p2;

    cout << "Ponto 1: ";
    cout << "(" << p1.getX() << "," << p1.getY() << ")\n";

    cout << "Ponto 2: ";
    cout << "(" << p2.getX() << "," << p2.getY() << ")\n";
    
    cout << "Ponto 3: ";
    cout << "(" << p3.getX() << "," << p3.getY() << ")\n";

    cout << "Distancia: " << p1.distancia(p2) << endl;
    return 0;
}
