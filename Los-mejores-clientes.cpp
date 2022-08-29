#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;
bool ord(pair<pair<string,int>,int> a, pair<pair<string,int>,int> b){
    return a.first.second > b.first.second;
}
int main() {
    int codigo = 0;
    int piezas = 0;
    string nombre;
    bool caso = true;
    map<string,pair<int, int> > mapa;
    int matriz[5][2];
    matriz[0][0] = 1;
    matriz[1][0] = 2;
    matriz[2][0] = 3;
    matriz[3][0] = 4;
    matriz[4][0] = 5;
    matriz[0][1] = 5;
    matriz[1][1] = 20;
    matriz[2][1] = 15;
    matriz[3][1] = 10;
    matriz[4][1] = 12;
    while(caso == true){
        cin >> nombre >> codigo >> piezas;
        if(nombre == "FIN" && codigo == 0 && piezas == 0){
            caso = false;
            break;
        }
        else{
            if(mapa.find(nombre) == mapa.end()){
                pair<int, int> miPar;
                int dinero = piezas*matriz[codigo-1][1];
                miPar = make_pair(dinero, piezas);
                mapa[nombre] =  miPar;
            }
            else{
                int dinero =  piezas*matriz[codigo-1][1];
                pair<int, int> miPar;
                miPar = make_pair(dinero, piezas);
                pair<int,int> miPar2;
                miPar2 = make_pair(mapa[nombre].first,mapa[nombre].second);
                pair<int,int> miPar3;
                miPar3 = make_pair((miPar.first+miPar2.first),(miPar.second+miPar2.second));
                mapa[nombre] = miPar3;
            }
        }
    }

    map<string,pair<int, int> >:: iterator it = mapa.begin();
    vector<pair<pair<string,int>,int> > v;
    while(it != mapa.end()){
        pair<pair<string,int>,int> paresin;
        pair<string,int> pardentro;
        pardentro = make_pair( it -> first, it-> second.first);
        paresin = make_pair(pardentro, it -> second.second);
        v.push_back(paresin);
        it++;
    }
    sort(v.begin(),v.end(),ord);

    for(int i = 0; i < 3; i++){
        string aux1 = v[i].first.first;
        int aux2 = v[i].first.second;
        int aux3 = v[i].second;
        cout << aux1 << ' ' << aux2 << ' ' << aux3 << endl;
    }
}