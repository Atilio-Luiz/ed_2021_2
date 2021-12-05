#include <iostream> // vector05.cpp
#include <vector>
using namespace std;

int main () {
    vector<int> vec(7);

    int val = 1;

    for(auto it = vec.begin(); it != vec.end(); ++it) { 
        *it = val;
        val++;
    }

    for(auto it = vec.begin(); it != vec.end(); ++it) 
        cout << *it << " ";

    cout << endl;
}