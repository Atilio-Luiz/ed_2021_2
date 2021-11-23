#ifndef PONTO3_H
#define PONTO3_H

class Ponto {
    private:
        double x;
        double y;
    public:
        Ponto();
        Ponto(double X, double Y);
        
        ~Ponto();
        
        double getX();
        double getY();
        
        void setX(double X);
        void setY(double Y);
        
        double distancia(Ponto p);
};

#endif
