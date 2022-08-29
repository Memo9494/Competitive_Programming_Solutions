#include<iostream>
#include<utility>
using namespace std;
int main(){
    bool mapa[][7] = {{1, 0, 1, 1, 1, 1, 1}, {1, 0, 1, 0, 0, 0, 1}, {1, 0, 1, 0, 1, 0, 1}, {1, 0, 1, 0, 1, 0, 1}, {1, 0, 1, 0, 1, 1, 1}, {1, 0, 0, 0, 0, 0, 1}, {1, 1, 1, 1, 1, 0, 1}};
    pair<int,int> puntoActual = make_pair(1,0);
    pair<int,int> puntoFinal = make_pair(5,6);
    int iteracion = 0;
    while(puntoActual.first != puntoFinal.first || puntoActual.second != puntoFinal.second){
        int x = puntoActual.first;
        int y = puntoActual.second;
        int distanciaX = puntoFinal.first - x;
        int distanciaY = puntoFinal.second - y;
        if(distanciaX > distanciaY){
            if(mapa[y][x+1] == 0){
                puntoActual = make_pair(x+1,y);
            }
            else if(mapa[y+1][x] == 0){
                puntoActual = make_pair(x,y+1);
            }
            else{
                cout << "no se pudo llegar a la meta" << endl;
            }
        }
        else{
            if(mapa[y+1][x] == 0){
                puntoActual = make_pair(x,y+1);
            }
            else if(mapa[y][x+1] == 0){
                puntoActual = make_pair(x+1,y);
            }
            else{
                cout << "no se pudo llegar" << endl;
            }
        }
        cout << "iteracion #" << iteracion << endl;
        for(int j = 0; j < 7; j++){
            for(int i = 0; i < 7; i++){
                if(i == puntoActual.first && j == puntoActual.second){
                    cout << "x";
                }
                else if (mapa[j][i] == 1){
                    cout << "O";
                }
                else{
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
        iteracion++;
    }
}
