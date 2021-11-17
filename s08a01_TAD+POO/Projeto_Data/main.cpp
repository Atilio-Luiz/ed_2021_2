#include <iostream>
#include "Data.h"
using namespace std;

const int MAX = 3;

int main() {
    /* Exemplo de acesso indevido aos atributos do objeto dataNiver
    Data dataNiver;
    dataNiver.dia = 333;
    dataNiver.mes = 40;
    dataNiver.ano = 202256;
    dataNiver.mostraData();
    */


    /**
     * Esse exemplo mostra como instanciar um objeto
     * dinamicamente.
     */
    Data *ptrData = new Data(21, 3, 1987);
    //ptrData->inicializaData(21, 3, 1987);
    ptrData->mostraData();
    delete ptrData;
    ptrData = nullptr;
    // ----------------------------------------------

    /**
     * Esse exemplo mostra como criar de forma estática
     * um array de Data
     */
    Data arrayData[MAX];
    int i = 0;
    int d, m, a;

    while(i < MAX) {  
        cout << "Digite uma data (d/m/a): ";
        cin >> d;
        cin.ignore();
        cin >> m;
        cin.ignore();
        cin >> a;
        arrayData[i].inicializaData(d, m, a);
        i++;
    }

    for(int j = 0; j < MAX; j++) {
        arrayData[j].mostraData();
    }
    // ------------------------------------------------------

    /**
     * Exemplo simples de criação de dois objetos
     * do tipo Data
     */
    Data d1(16,11,2021);
    //d1.inicializaData(16,11,2021);
    d1.mostraData();

    Data d2(17,11,2021);
    //d2.inicializaData(17,11,2021);
    d2.mostraData();
    // ------------------------------------------------------

    return 0;
}