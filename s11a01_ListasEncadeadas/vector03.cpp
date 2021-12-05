#include <iostream> // vector03.cpp
#include <vector>
using namespace std;

int main () {
    vector<int> myVector(7);

    for(int i = 0; i < 7; ++i) 
        myVector[i] = i+1;

    for(size_t i = 0; i < myVector.size(); ++i) 
        cout << myVector[i] << " ";
    cout << endl;
}