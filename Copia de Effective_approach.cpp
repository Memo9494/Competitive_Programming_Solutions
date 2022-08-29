#include <iostream>
#include <vector>
#include<map>
using namespace std;
int main() {
    long long int n1;
    cin >> n1; 
    long long int apoyo1;
    apoyo1 = n1;
    vector<long long int> v1;
    while(n1--){
        long long int x;
        cin >> x;
        v1.push_back(x);
    }

    long long int n2;
    cin >> n2; 
    long long int apoyo2;
    apoyo2 = n2;
    vector<long long int> v2;
    while(n2--){
        long long int x2;
        cin >> x2;
        v2.push_back(x2);
    }
    long long int contador = 0;
    long long int contador2 = 0;
    map< long long int, long long int> mapa;


    for(long long int i = 0; i < apoyo1; i++){
        mapa[v1[i]] = i;
    }

    for(long long int i = 0; i < apoyo2; i++){
        long long int nalas = 0;
        nalas = mapa[v2[i]] + 1;
        contador = contador + nalas;
    }
    for(long long int i = 0; i < apoyo2; i++){
        long long int nalas2 = 0;
        nalas2 = apoyo1 - mapa[v2[i]];
        contador2 = contador2 + nalas2;
    }

    cout << contador << ' ' << contador2 << endl;
    

}