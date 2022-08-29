#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> puertas;
    map<int,int> llaves;

    int n1 = 0;
    int contador1 = 0;
    cin >> n1;
    for(int i =0; i < n1; i++){
        int puerta = 0;
        contador1 = contador1 + 1;
        cin >> puerta;
        puertas[contador1] = puerta;
    }

    int n2 = 0;
    int contador2 = 0;
    cin >> n2;

    for(int i =0; i < n2; i++){
        int llave = 0;
        contador2 = contador2 + 1;
        cin >> llave;
        llaves[contador2] = llave;
    }
    bool check = true;
    int posicion = puertas.size()/2 + 1;
    int menor = 0;
    int mayor = puertas.size();
    for(int i = 1; i < n2 + 1; i++){
        while(check){
            if((llaves[i] =! puertas[posicion]) && mayor == menor){ 
                cout << 0 << endl;
                check = false;
            }
            else if(llaves[i] == puertas[posicion]){
                cout << posicion;
                check = false;
            }
            else if(llaves[i] > puertas[posicion]){
                menor = posicion;
                posicion = posicion + (mayor - posicion)/2;
                continue;
            }
            else if(llaves[i] < puertas[posicion]){
                mayor = posicion;
                posicion = (mayor - menor)/2;
                continue;
            }
        }
        }
    }