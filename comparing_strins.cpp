#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<utility>
using namespace std;
//tas bien?
int main(){
    string g1,g2;
    cin >> g1;
    cin >> g2;
    vector<pair<int,char> >aux;
    int contador = 0;
    bool es = true;
    if(g1.size() != g2.size()){
        es = false;
    }
    for(int i = 0; i < g2.size();i++){
        if(contador > 2){
            es = false;
            break;
        }
        if(g1[i] != g2[i]){
            contador += 1;
            pair<int,char> aux_pair;
            aux_pair = make_pair(i,g1[i]);
            aux.push_back(aux_pair);
        }
    }
    if(es == false){
        cout << "NO" << endl;
    }
    else{
        string copy = g1;
        copy[aux[0].first] = aux[1].second;
        copy[aux[1].first] = aux[0].second;
        if(copy == g2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}