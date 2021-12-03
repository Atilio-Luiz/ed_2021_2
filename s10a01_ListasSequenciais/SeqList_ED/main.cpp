#include <iostream>
#include "SeqList.h"
using namespace std;

int main() {
    SeqList list(30);
    int i = 1;

    while(!list.full()) {
        list.push_back(i++);
    }
    
    cout << list << endl; // imprime lista na tela

    cout << "front: " << list.front() << endl;
    cout << "back: " << list.back() << endl;

    list.remove(1);

    cout << "após a remoção do cara no índice 1: " << endl;
    cout << list << endl; // imprime lista na tela

    list.remove(2);

    cout << "após a remoção do cara no índice 2: " << endl;
    cout << list << endl; // imprime lista na tela

    return 0;
}