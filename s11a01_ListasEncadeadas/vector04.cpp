#include <iostream> // vector04.cpp
#include <vector>
using namespace std;

int main () {
    vector<int> vec(7);

    vector<int>::iterator it; // definição de um iterador
    int val = 1;

    for(it = vec.begin(); it != vec.end(); ++it) {
        *it = val;
        val++;
    }

    for(it = vec.begin(); it != vec.end(); ++it) 
        cout << *it << " ";

    cout << endl;
}