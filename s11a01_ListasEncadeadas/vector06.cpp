#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(3, 10); //vec: 10,10,10
    vector<int>::iterator it;

    it = vec.begin();
    it = vec.insert(it, 20); //vec: 20,10,10,10

    vec.insert(it, 2, 30); //vec: 30,30,20,10,10,10

    // "it" no longer valid, get a new one:
    it = vec.begin();

    vector<int> z(2, 40); //z: 40,40
    vec.insert(it+2, z.begin(), z.end()); 
    //vec: 30,30,40,40,20,10,10,10
}