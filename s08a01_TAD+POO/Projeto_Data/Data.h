#ifndef DATA_H
#define DATA_H
#include <iostream>

/**
 * Definição da classe Data
 */
class Data {
private: 
    // Atributos da classe Data
    int dia; // o dia do objeto Data
    int mes; // o mês do objeto Data
    int ano; // o ano do objeto Data

public:
    /**
    * Construtor padrão
    */
    Data() {
        dia = 0;
        mes = 0;
        ano = 0;
    }

    /**
     * Construtor
     * O construtor SEMPRE é chamado assim que o objeto é instanciado.
     */
    Data(int d, int m, int a) {
        if(dataEhValida(d,m,a)) {
            dia = d;
            mes = m;
            ano = a;
        }
        else {
            dia = 0;
            mes = 0;
            ano = 0;
        }
    }

    /**
     * Essa função recebe o dia, mês e ano e
     * inicializa a data com os valores entrados
     * se e somente se os valores estiverem corretos.
     */
    void inicializaData(int d, int m, int a) {
        if(dataEhValida(d,m,a)) {
            dia = d;
            mes = m;
            ano = a;
        }
        else {
            dia = 0;
            mes = 0;
            ano = 0;
        }
    }

    /**
     * Essa função verifica se a data está correta
     */
    bool dataEhValida(int d, int m, int a) {
        if(d >= 1 && d <= 31 && m >= 1 && m <= 12) {
            return true;
        }
        else {
            return false;
        }
    }

    void mostraData() {
        std::cout << dia << "/" << mes << "/" << ano << std::endl;
    }
};

#endif 