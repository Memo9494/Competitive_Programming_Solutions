#include<iostream>
using namespace std;
int main(){
    int* arregloLineal = new int[1000];
    for(int i = 0; i < 1000; i++){
        arregloLineal[i] = 10*i -1;
    }
    cout << arregloLineal[3] << endl;
    cout << arregloLineal[999] << endl;
    cout << arregloLineal[800] << endl;
    delete arregloLineal;
    int* arregloCuadrada = new int[1000];
    for(int i = 0; i < 1000;i++) {
        arregloCuadrada[i] = i*i;
    }
    cout << arregloCuadrada[800] << endl;
}