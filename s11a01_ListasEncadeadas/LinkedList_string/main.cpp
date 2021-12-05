#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main() {
    LinkedList list; // cria lista vazia
    string str = "";

    while(true) {
        cout << "Entre uma palavra na LinkedList (exit para sair): ";
        getline(cin, str);
        if(str == "exit") {
            break;
        }
        list.push_back(str);
    }

    cout << "list size: " << list.size() << endl;
    cout << "list: " << list << endl;

    cout << "limpando a lista..." << endl;
    list.clear();
    cout << "list: " << list << endl;
}