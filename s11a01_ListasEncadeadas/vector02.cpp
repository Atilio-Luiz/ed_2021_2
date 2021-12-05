#include <iostream> // vector02.cpp
#include <vector>
using namespace std;

void print(vector<int>& vec) {
    for(int e : vec) cout << e << " ";
    cout << endl;
}

int main () {
    vector<int> myVector;

    for(int i = 1; i <= 8; i++) 
        myVector.push_back(i);
    
    myVector.resize(10);
    print(myVector); // 1 2 3 4 5 6 7 8 0 0
    myVector.resize(5);
    print(myVector); // 1 2 3 4 5
    myVector.resize(8,100); // 1 2 3 4 5 100 100 100
    print(myVector);
}