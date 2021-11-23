#include <iostream> // Referencia03.cpp
using namespace std;

struct Ponto {
    double x, y;
};

void lerPonto(Ponto& p) {
    cin >> p.x;
    cin >> p.y;
}

int main() {
    Ponto ponto;
    lerPonto(ponto);
    cout << ponto.x << "," << ponto.y << endl;
}