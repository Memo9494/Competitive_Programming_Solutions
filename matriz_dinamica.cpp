#include<iostream>

using namespace std;
void pedirDatos();
void mostrarDatos();

int **puntero_matriz,nFilas,nCol;
int main(){
    pedirDatos();
    mostrar_matriz(puntero_matriz,nFilas,nCol);

    delete[] puntero_matriz;

}
void pedirDatos(){
    cin >> nFilas;
    cin >> nCol;

    puntero_matriz = new int*[nFilas]; //reservar memoria para las filas
    for(int i = 0; i < nFilas;i++){
        puntero_matriz[i] = new int[nCol];
    }
    cout << "Digitando elementos de la matriz:";
    for(int i = 0; i <nFilas;i++){
        for(int j = 0; i < nCol; i++){
            cin >> *(*(puntero_matriz+i)+j);
        }
    }

}
void mostrar_matriz(int **puntero_matriz, int nFilas, int nCol){
    for(int i = 0; i <nFilas;i++){
        for(int j = 0; i < nCol; i++){
            cout << *(*(puntero_matriz+i)+j);
        }
    }
}