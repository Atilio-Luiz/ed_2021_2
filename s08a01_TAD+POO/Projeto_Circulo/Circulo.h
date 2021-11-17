#ifndef CIRCULO_H
#define CIRCULO_H
#include "Ponto.h"

struct Circulo; // Tipo a ser exportado

// Cria um círculo cujo centro é um atributo
// do tipo Ponto e raio é um float;
Circulo *circ_cria(double raio, Ponto *centro);

// atribui um novo valor ao raio do circulo
void circ_setRaio(Circulo *c, double r);

// obtém o raio
double circ_getRaio(Circulo *c);

// obtém o centro do círculo
Ponto *circ_getCentro(Circulo *c);

// Calcula a área do circulo
double circ_area(Circulo *c);

// verifica se um ponto está no interior do circulo
bool circ_interior(Circulo *c, Ponto *p);

// libera memória alocada para o Círculo
void circ_libera(Circulo *p);


#endif