#include <iostream> // vector07.cpp
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    // set some values (from 1 to 10)
    for(int i = 1; i <= 10; i++) 
        vec.push_back(i);

    // erase the 6th element
    auto it = vec.erase(vec.begin() + 5);
    vec.erase(it); // erase the number 7

    cout << "vec contains: ";
    for(size_t i = 0; i < vec.size(); ++i)
        cout << " " << vec[i];
    cout << endl;
}