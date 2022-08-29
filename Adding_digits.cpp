#include<iostream>
#include <cmath>
#include <map>
using namespace std;
int numero_max(int a,int b){
    int respuesta = -1;
    for(int i = 0; i < 10; i++){
        if((a*10 + i)%b ==0){
            respuesta = a*10 + i;
            break;
        }
    }
    return respuesta;
}
int main(){
    int a,b,n;
    cin >> a >> b >> n;
    int respuesta = numero_max(a,b);
    string ceros(n-1,'0');
    if(respuesta < 0){
        cout << respuesta << endl;
    }
    else{
        cout << respuesta << ceros << endl;
    }
    
}