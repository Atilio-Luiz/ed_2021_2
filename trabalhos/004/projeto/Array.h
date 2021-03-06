#include <iostream>
using namespace std;

class Array {
private:
    int capacity; //capacidade total do Array
    int *ptr;     //ponteiro para o array de inteiros

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