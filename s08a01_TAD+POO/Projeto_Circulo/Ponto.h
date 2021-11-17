#ifndef PONTO_H
#define PONTO_H
// Arquivo Ponto.h --- Interface do TAD Ponto

struct Ponto; // Tipo exportado 

// Aloca e retorna um ponto com coordenadas (x,y)
Ponto *pto_cria(double x, double y); 

// Libera a memoria de um ponto previamente criado
void pto_libera(Ponto* p); 

// Retorna os valores das coordenadas de um ponto
// nos parametros x e y
void pto_acessa(Ponto *p, double* x, double *y); 

// Atribui novos valores as coordenadas de um ponto
void pto_atribui(Ponto *p, double x, double y); 

// Retorna a distancia entre dois pontos
double pto_distancia(Ponto* p1, Ponto* p2);

 #endif
