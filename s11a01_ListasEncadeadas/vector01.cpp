#include <iostream> // vector01.cpp
#include <vector>
using namespace std;

int main() {
    // cria um vector vazio
    vector<int> primeiro; 

    // cria um vector com 30 números zero
    vector<float> segundo(30);

    // um vector contendo 4 inteiros com valor 100
    //   -------------------------
    //   | 100 | 100 | 100 | 100 | 
    //   -------------------------
    vector<int> terceiro(4, 100);

    // Uma cópia do terceiro
    vector<int> quarto(terceiro);
}