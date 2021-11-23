#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    Fraction f1 , f2;
    cout << "Digite a fração f1 no formato a/b: ";
    cin >> f1;
    cout << "Digite a fração f2 no formato a/b: ";
    cin >> f2;

    cout << "f1: " << f1 << endl;
    cout << "f2: " << f2 << "\n\n";

    cout << "f1 + f2: " << f1 + f2 << endl;
    cout << "f1 - f2: " << f1 - f2 << endl;
    cout << "f1 * f2: " << f1 * f2 << endl;
    cout << "f1 / f2: " << f1 / f2 << "\n\n";
    
    if(f1 < f2) cout << "f1 < f2" << endl;
    if(f1 <= f2) cout << "f1 <= f2" << endl;
    if(f1 == f2) cout << "f1 == f2" << endl;
    if(f1 != f2) cout << "f1 != f2" << endl;
    if(f1 > f2) cout << "f1 > f2" << endl;
    if(f1 >= f2) cout << "f1 >= f2" << endl;

    cout << endl;

    cout << "++f1 = " << ++f1 << endl;
    cout << "--f2 = " << --f2 << endl;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << "\n\n";

    cout << "f1++ = " << f1++ << endl;
    cout << "f2-- = " << f2-- << endl;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << "\n\n";

    f1 += f2;
    cout << "f1 depois de f1 += f2 é " << f1 << endl;
    cout << "f2 = " << f2 << endl;

    f1 += 3;
    cout << "f1 depois de f1 += 3 é " << f1 << endl;

    return 0;
}