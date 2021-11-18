// Implementacao do TAD Matriz
#include <iostream>
#include <iomanip>
#include "Matriz.h"

// Aloca espaco para matriz n por m
Matriz::Matriz(int n, int m) {
// TODO
}   

// Destrutor: Libera a memoria da matriz
Matriz::~Matriz() {
// TODO
}     

// Retorna o valor do elemento [i][j]
int Matriz::valor(int i, int j) {
// TODO
} 

// Atribui valor ao elemento [i][j]
void Matriz::atribui(int valor, int i, int j) {
// TODO
}

// Retorna o numero de linhas da matriz
int Matriz::linhas() {
// TODO
} 

// Retorna o numero de colunas da matriz
int Matriz::colunas() { 
// TODO
}

// Imprime matriz --- Ja esta codificado 
void Matriz::imprime(int largura) {
	for (int linha = 0; linha < lin; linha++) {
		for (int coluna = 0; coluna < col; coluna++) {
			std::cout << std::setw(largura) << matriz[linha][coluna];
		}
		std::cout << std::endl;
	}
} 

// Soma matrizes
Matriz *Matriz::soma(Matriz *B) {
// TODO
}

// Multiplica matrizes
Matriz *Matriz::multiplica(Matriz *B) {
// TODO
}
