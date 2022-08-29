#include<iostream>
using namespace std;
struct comida{
    string nombre;
    int calorias;
};
int main(){
    comida pizza;
    pizza.nombre = "pizza";
    pizza.calorias = 1234;
    comida* puntero_comida;
    puntero_comida = &pizza;
    cout << puntero_comida ->nombre << endl;
    cout << puntero_comida -> calorias << endl;
}