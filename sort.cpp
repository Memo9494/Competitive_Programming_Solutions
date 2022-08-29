
#include <iostream>
#include<iostream>
#include<vector>
using namespace std;
bool ord(int a, int b){
    return a > b;
}
int main() {
    vector<int> enteros;
    enteros.push_back(1);
    enteros.push_back(5);
    enteros.push_back(12);
    enteros.push_back(2);
    enteros.push_back(20);
    enteros.push_back(3);
    sort(enteros.begin(),enteros.end(),ord);
    for(int i = 0; i < enteros.size(); i++){
        cout << enteros[i] << endl;
    }
}