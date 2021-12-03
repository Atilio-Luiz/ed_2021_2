#include <iostream>
#include "SeqList.h"
using namespace std;

int main() {
    
    SeqList list(30);

    int i = 1;
    while(!list.full()) {
        list.push_back(i++);
    }

    SeqList l2 ( list ); // construtor de cópia executando aqui

    l2[0] = 9999;

    cout << "l2: " << l2 << endl;
    cout << "list: " << list << endl;
    
    // ----------------------------------------
    
    SeqList l3 (10);
    SeqList l4 (10);
    SeqList l5 (10);

    l5 = l4 = l3 = list;

    l3[0] = 777;
    l4[0] = 888;
    l5[0] = 999;

    cout << "l3: " << l3 << endl;
    cout << "l4: " << l4 << endl;
    cout << "l5: " << l5 << endl;
    cout << "list: " << list << endl;
}