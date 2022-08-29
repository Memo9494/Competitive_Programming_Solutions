#include <iostream>

using namespace std;

int main() {
    int grafo[][7] = {{-1,  2,  5, 17, -1, -1, -1},
                      { 2, -1, -1,  3, 10, -1, -1},
                      { 5, -1, -1,  8, -1,  6, -1},
                      {17,  3,  8, -1,  7,  7, -1},
                
    while(true) {
        int minimo = -1;
        for(int i = 0; i < 7; i++) {
            if(!marcados[i]) {
                if(minimo == -1) {
                    minimo = i;
                }
                if(distancias[i] < distancias[minimo] && distancias[i] != 2147483647) {
                    minimo = i;
                }
            }
        }
        if(minimo == -1) {
            break;
        }      {-1, 10, -1,  7, -1, -1,  4},
                      {-1, -1,  6,  7, -1, -1,  9},
                      {-1, -1, -1, -1,  4,  9, -1}};
    int distancias[7];
    int previo[7];
    bool marcados[7];
    distancias[0] = 0;
    marcados[0] = false;
    for(int i = 1; i < 7; i++) {
        distancias[i] = 2147483647;
        marcados[i] = false;
    }
        marcados[minimo] = true;
        for(int i = 0; i < 7; i++) {
            if(!marcados[i] && grafo[minimo][i] != -1) {
                int distanciaNueva = distancias[minimo] + grafo[minimo][i];
                if(distanciaNueva < distancias[i]) {
                    distancias[i] = distanciaNueva;
                    previo[i] = minimo;
                }
            }
        }
    }
    int actual = 6;
    while(actual != 0) {
        cout << actual + 1 << " <=> ";
        actual = previo[actual];
    }
    cout << 1 << endl;
    cout << "Distancia mínima: " << distancias[6] << endl;
}