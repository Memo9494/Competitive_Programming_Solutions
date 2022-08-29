#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int contar(string nombre){
    int counter = 0;
    for(int i = 0; i < nombre.size(); i++){
        char letra = nombre[i];
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            counter += 1;
        }
    }
    return counter;
}
int main(){
    string nombre;
    cin >> nombre;
    int n = contar(nombre);
    cout << n << endl;

}