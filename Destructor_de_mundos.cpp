//Destructor
#include<iostream>
using namespace std;
class perro{
    private:
        string nombre, raza;
    public:
        perro(string,string); // constructor
        ~perro(); //destructor Sirve para eliminar todos los objetos de la clase que hemos creado
        void mostrar_datos();
        void jugar();
};
//Constructor
perro::perro(string _nombre, string _raza){
    nombre = _nombre;
    raza = _raza;
}
//Destructor
perro::~perro(){
}
void perro::mostrar_datos(){
    cout << "Nombre" << nombre << endl;
    cout << "raza" << raza << endl;
}
void perro::jugar(){
    cout << "el perro" << nombre << "está jugando" << endl;
}
int main(){
    perro perro1("Curie","Pastor");
    perro1.mostrar_datos();
    perro1.jugar();
    perro1.~perro();

}
