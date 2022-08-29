#include <iostream>
#include <queue>
#include <vector>

using namespace std;
//struct punto
struct Punto {
    int x;
    int y;
    int ultimoX;
    int ultimoY;
    bool visitado;
};

int main() {
    //generate a proof matrix
    bool mapa[][7] = {
        {1, 0, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 1, 1, 0, 1},
        {1, 0, 0, 1, 0, 0, 1},
        {1, 0, 1, 1, 0, 1, 1},
        {1, 0, 1, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 0, 1}};
    Punto puntos[7][7];
    //generate a same size matrix but made of our struct point, we assign a position and a false value in visited, because nono of them is visited yet
    for(int y = 0; y < 7; y++) {
        for(int x = 0; x < 7; x++) {
            puntos[y][x].x = x;
            puntos[y][x].y = y;
            puntos[y][x].visitado = false;
        }
    }
    // Mark the initial position of the maze and the last position of the maze
    int xInicial = 1;
    int yInicial = 0;
    int xFinal = 5;
    int yFinal = 6;
    //Iniciar la busqueda con el punto inicial
    queue<Punto> bfs;
    bfs.push(puntos[yInicial][xInicial]);
    puntos[yInicial][xInicial].visitado = true;
    while(bfs.size() > 0) {
        // we save the front value to work with it and remove it from the queue 
        Punto actual = bfs.front();
        bfs.pop();
        int x = actual.x;
        int y = actual.y;
        //Checar si los puntos adyacentes no estan fuera del arreglo y agregarlos a la fila si no han sido visitados
        if(x + 1 < 7) {
            if(puntos[y][x + 1].visitado == false && mapa[y][x + 1] == false) {
                bfs.push(puntos[y][x + 1]);
                puntos[y][x + 1].visitado = true;
                puntos[y][x + 1].ultimoX = x;
                puntos[y][x + 1].ultimoY = y;
            }
        }
        if(x - 1 >= 0) {
            if(puntos[y][x - 1].visitado == false && mapa[y][x - 1] == false) {
                bfs.push(puntos[y][x - 1]);
                puntos[y][x - 1].visitado = true;
                puntos[y][x - 1].ultimoX = x;
                puntos[y][x - 1].ultimoY = y;
            }
        }
        if(y + 1 < 7) {
            if(puntos[y + 1][x].visitado == false && mapa[y + 1][x] == false) {
                bfs.push(puntos[y + 1][x]);
                puntos[y + 1][x].visitado = true;
                puntos[y + 1][x].ultimoX = x;
                puntos[y + 1][x].ultimoY = y;
            }
        }
        if(y - 1 >= 0) {
            if(puntos[y - 1][x].visitado == false && mapa[y - 1][x] == false) {
                bfs.push(puntos[y - 1][x]);
                puntos[y - 1][x].visitado = true;
                puntos[y - 1][x].ultimoX = x;
                puntos[y - 1][x].ultimoY = y;
            }
        }
    }
    vector<Punto> camino;
    Punto actual = puntos[yFinal][xFinal];
    while(actual.x != xInicial || actual.y != yInicial) {
        camino.push_back(actual);
        actual = puntos[actual.ultimoY][actual.ultimoX];
    }
    cout << "El camino es: " << endl;
    for(int i = camino.size() - 1; i >= 0; i--) {
        cout << camino[i].x << ", " << camino[i].y << endl;
    }
}