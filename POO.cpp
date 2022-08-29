// Objetos con caracteristicas
//Un objeto es un conjunto de atributos y métodos, un ejemplo se deriva de una clase
//Atributos: Características. Raza, color de pelo, años
//Métodos: Comer, dormir, jugar
//Abstracción, proceso mental de extracción de las características escenciales de algo, ignorando los detalles superfluos
//DNI,NOMBRE,EDAD,TALLA,PESO
//Encapsulación, proceso el que se ocultan los detalles del soporte de las características de una abstracción
//Herencia: una clase nueva se crea a partir de una clase existente
//Polimorfismo, aquella cualidad que poseen los objetos para responder de distinto modo ante el mismo mensaje
#include<iostream>
using namespace std;
class Persona{
    private: // atributos
        int edad;
        string nombre;
     public: //metodos
        Persona(int,string); //Constructor
        void leer();
        void correr();
};

//Constructor, nos sirve para inicializar los atributos de la clase
Persona::Persona(int _edad,string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout << "Soy " << nombre << "y estoy leyendo un libro" << "tengo " << edad << " años" << endl;
}

void Persona::correr(){
    cout << "Soy " << nombre << "y estoy corriendo un maraton" << endl;
}

int main(){
    Persona p1 = Persona(20,"Guillermo");
    p1.leer();
    p1.correr();
    Persona p2(19,"Maria");
    p2.correr();
}