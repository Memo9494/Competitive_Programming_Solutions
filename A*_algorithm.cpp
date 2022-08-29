#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

struct Punto {
    int x;
    int y;
    int distancia;
    bool visitado;
};
struct ComparaDistancia {
    bool operator()(Punto const& p1, Punto const& p2) {
        return p1.distancia > p2.distancia;
    }
};
int main() {
    int grafo[][7] = {{1, 1, 1, 1, 1, 0, 1},
                      {1, 0, 1, 0, 1, 0, 1},
                      {1, 0, 1, 0, 1, 0, 1},
                      {1, 0, 0, 0, 0, 0, 1},
                      {1, 0, 1, 0, 1, 1, 1},
                      {1, 0, 1, 0, 0, 0, 1},
                      {1, 1, 1, 1, 1, 0, 1}};
    Punto puntos[7][7];
    for(int y = 0; y < 7; y++) {
        for(int x = 0; x < 7; x++) {
            puntos[y][x].x = x;
            puntos[y][x].y = y;
            puntos[y][x].visitado = false;
        }
    }
    int xInicial = 5;
    int yInicial = 0;
    int xFinal = 5;
    int yFinal = 6;
    priority_queue<Punto, vector<Punto>, ComparaDistancia> camino;
    Punto inicial = puntos[yInicial][xInicial];
    inicial.distancia = 6;
    inicial.visitado = true;
    camino.push(inicial);
    while(camino.size() > 0) {
        Punto actual = camino.top();
        camino.pop();
        int x = actual.x;
        int y = actual.y;
        cout << x << ", " << y << endl;
        if(x == xFinal && y == yFinal) {
            break;
        }
        if(x - 1 >= 0) {
            if(!puntos[y][x - 1].visitado && grafo[y][x - 1] == 0) {
                puntos[y][x - 1].distancia = abs(y - yFinal) + abs((x - 1) - xFinal);
                puntos[y][x - 1].visitado = true;
                camino.push(puntos[y][x - 1]);
            }
        }
        if(x + 1 < 7) {
            if(!puntos[y][x + 1].visitado && grafo[y][x + 1] == 0) {
                puntos[y][x + 1].distancia = abs(y - yFinal) + abs((x + 1) - xFinal);
                puntos[y][x + 1].visitado = true;
                camino.push(puntos[y][x + 1]);
            }
        }
        if(y - 1 >= 0) {
            if(!puntos[y - 1][x].visitado && grafo[y - 1][x] == 0) {
                puntos[y - 1][x].distancia = abs((y - 1) - yFinal) + abs(x - xFinal);
                puntos[y - 1][x].visitado = true;
                camino.push(puntos[y - 1][x]);
            }
        }
        if(y + 1 < 7) {
            if(!puntos[y + 1][x].visitado && grafo[y + 1][x] == 0) {
                puntos[y + 1][x].distancia = abs((y + 1) - yFinal) + abs(x - xFinal);
                puntos[y + 1][x].visitado = true;
                camino.push(puntos[y + 1][x]);
            }
        }
    }
}