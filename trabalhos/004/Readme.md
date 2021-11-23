# Classe Array com alocação dinâmica (orientada a objetos)

![](figura.jpeg)

---

## Objetivo

- Implemente uma classe chamada *Array* com funções especificadas mais abaixo. 
- A classe *Array* deve encapsular um array de inteiros, que deve ser iniciado utilizando alocação dinâmica. Além do vetor de dados, a classe *Array* deve conter como atributo a *capacity*, que define a capacidade do Array.

---

## Shell
```bash
#__case create
$init 3
$status
capacity:3
$end

#__case insert v index
# insere o valor 'v' na posição index do Array
$init 5
$show
[ 0 0 0 0 0 ]
$insert 3 0
$insert 4 1
$insert 5 2
$insert 1 3
$show
[ 3 4 5 1 0 ]
```

---

## Esqueleto

Logo acima, na descrição da questão, há uma pasta **projeto** com os 
códigos-fonte iniciais para a solução desta atividade. Baixe os arquivos
no seu computador e complete a implementação da classe **Array**. Logo
abaixo, reproduzo parte do código do projeto.

<!--FILTER main.cpp cpp-->
```cpp
#include <iostream>
#include <sstream>
using namespace std;

class Array {
private:
    int capacity {0};    //capacidade total do Array
    int *ptr {nullptr};  //ponteiro para o array de inteiros

public:
    Array(int capacity) {
        //inicialize this->capacity com capacity
        //crie memória dinamicamente para this->ptr com tamanho capacity
        //o vetor é inicializado com zeros
    }

    //como seu Array tem atritutos do tipo ponteiros, você precisa criar um
    //construtor de cópia e um operador de atribuição ou terá erros do tipo double-free

    //O operador de atribuição será invocado quando você fizer um Array receber outro
    //Exemplo:
    //Array vec(4);
    //vec = Array(6);
    //nesse ponto, os atributos de this já foram inicializados, 
    //mas você precisa alterá-los para copiar os valores de other
    void operator=(const Array& other) {
        //primeiro checa se other e this não são os mesmos Arrays, 
        // caso eles não sejam, executar as operações abaixo:
        //inicialize this->capacity com other.capacity
        //se this->ptr não for nulo, devolva a memória com delete[]
        //crie nova memória para this->ptr do tamanho de other.capacity
        //copie os dados de other.ptr para this->ptr
    }

    //aqui você ensina seu Array a ser criado a partir de outro Array
    //Exemplo: 
    //Array v(4);
    //Array v2(v);
    Array(const Array& other){
        //aqui você não precisa fazer nada, basta utilizar 
        // o operador de atribuição que você já implementou
        *this = other;
    }

    // Destrutor
    ~Array(){
        //devolva this->ptr
    }

    // getter
    int getCapacity() {
        
    }

    //esse é o operador de igualdade sobrecarregado
    //essa função determina se os dois Arrays são iguais e devolve true,
    //caso contrário devolve false
    bool operator==(const Array& other) {
        // checa se this->capacity é diferente de other.capacity
        // checa se this->ptr tem os mesmos elementos que other.ptr
    }

    bool operator!=(const Array& other) {
        //aqui você não precisa fazer nada, basta utilizar 
        // o operador de igualdade que você já implementou logo acima
        return !(*this == other); // invoca operator==
    }

    //Esse é o toString do C++
    //tudo que enviar para out, é como se estivesse enviando 
    // para saída padrão basta entender o funcionamento
    friend ostream& operator<<(ostream &out, const Array& array){
        out << "[ ";
        for(int i = 0; i < array.capacity; ++i)
            out << array.ptr[i] << " ";
        out << "]";
        return out;
    }

    //esse é o operador de indexação sobrecarregado
    //ele permite que possamos acessar e/ou modificar o valor 
    //em um certo índice do Array.
    int& operator[](int index) {
        //devolva o elemento na posição index
    }
};


/* NAO MEXA DAQUI PRA BAIXO */
int main(){
    string line, cmd;
    int value;
    Array v(0);
    while(true){
        getline(cin, line);
        cout << "$" << line << endl;
        stringstream ss(line);
        ss >> cmd;
        if(cmd == "end"){
            break;
        } else if(cmd == "init"){
            ss >> value;
            v = Array(value);
        } else if(cmd == "status"){
            cout << " capacity:" << v.getCapacity() << "\n";
        } else if(cmd == "insert"){
            int index;
            ss >> value;
            ss >> index;
            v[index] = value;
        } else if(cmd == "show"){
            cout << v << endl;
        } else {
            cout << "fail: comando invalido\n";
        }
    }
}
```
<!--FILTER_END-->



