#include<iostream>
using namespace std;
int main(){
    int enteroNormal = 19;
    int* enteroAsignado = new int;
    *enteroAsignado = 5;
    float floaNormal = 12.45;
    float* floatAsignado = new float;
    *floatAsignado = 3.1416;
    int* arregloGrande = new int[1000000];
    arregloGrande[99999] = 1234;
    cout << enteroNormal << endl;
    cout << *enteroAsignado << endl;
    cout << floaNormal << endl;
    cout << *floatAsignado << endl;
    cout << arregloGrande[99999] << endl;
}