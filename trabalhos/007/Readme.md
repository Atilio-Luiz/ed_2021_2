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

Logo abaixo, mostro um código base usando como estrutura de dado base o vector do c++.
Alguns links sobre vector: 
- https://www.geeksforgeeks.org/vector-in-cpp-stl/
- https://www.cplusplus.com/reference/vector/vector/


<!--FILTER main.cpp C++-->
```C++
#include <iostream>
#include <vector>
using namespace std;

void right_rotation(vector<int>& vet, int nrot){

}

void show(vector<int> &vet) {
    cout << "[ ";
    for(int value : vet)
        cout << value << " ";
    cout << "]\n";
}

int main(){
    int size, nrot;
    cin >> size >> nrot;
    vector<int> vet(size);
    for(int i = 0; i < size; i++)
        cin >> vet[i];
    
    right_rotation(vet, nrot);
    show(vet);
}
```
<!--FILTER_END-->