# Rotação à direita

Uma rotação desloca os elementos do vetor em uma determinada direção. Uma **rotação à direita** equivale a pegar o último elemento e inserí-lo na primeira posição.

Implemente a operação de rotação. Observe que calculando as posições finais corretamente você fará uma única operação de transposição das posições do vetor.

- Entrada
    - Linha 1: tamanho do vetor `T` e número de elementos rotacionados `R`
    - Linha 2: elementos do vetor
- Saída
    - Vetor rotacionado

---

## Entradas e Saídas de amostra

```
>>>>>>>>
5 0
1 2 3 4 5
========
[ 1 2 3 4 5 ]
<<<<<<<<

>>>>>>>>
5 1
1 2 3 4 5
========
[ 5 1 2 3 4 ]
<<<<<<<<

>>>>>>>>
5 4
1 2 3 4 5
========
[ 2 3 4 5 1 ]
<<<<<<<<

>>>>>>>>
5 9
1 2 3 4 5
========
[ 2 3 4 5 1 ]
<<<<<<<<

>>>>>>>>
5 5008
1 2 3 4 5
========
[ 3 4 5 1 2 ]
<<<<<<<<
```

---

## Código Base

<!--FILTER main.cpp C++-->
```C++
#include <iostream>
#include "SeqList.h" // Usando a estrutura de dados SeqList vista em aula
using namespace std;

void right_rotation(SeqList& vet, int nrot){

}

void show(SeqList &vet) {
    cout << "[ ";
    for(int i = 0; i < vet.size(); i++)
        cout << vet[i] << " ";
    cout << "]\n";
}

int main(){
    int size, nrot;
    cin >> size >> nrot;
    SeqList vet(size);
    for(int i = 0; i < size; i++) {
        int valor;
        cin >> valor;
        vet.push_back(valor);
    }
    right_rotation(vet, nrot);
    show(vet);
}
```
<!--FILTER_END-->