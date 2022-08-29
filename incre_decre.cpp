#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int numero;
    int contador = 0;
    int ve[n];
    for(int i = 0; i < n; i ++){
        cin >> numero;
        ve[i] = numero;
    }
    for(int i = 0; i < n; i++){
        contador = contador + ve[i];
    }
    if(contador%n == 0){
        cout << n << endl;
    }
    else{
        cout << n -1 << endl;
    }
}