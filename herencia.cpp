#include<iostream>
using namespace std;
class persona{
    private: //atributos
        string nombre;
        int edad;
    public: //Metodos
        persona(string,int);
        void mostrar_persona();

};
class alumno : public persona{
    private:
        string codigo_alumno;
        float nota_final;
    public:
        alumno(string,int,string,float); //constructor clase alumno
        void mostrar_alumno();
};
//Constructor-persoma
persona::persona(string _nombre , int _edad){
    nombre = _nombre;
    edad = _edad;
}
alumno::alumno(string _nombre, int _edad, string _codigo_alumno, float _nota_final) :persona(_nombre,_edad){
    codigo_alumno = _codigo_alumno;
    nota_final = _nota_final;
}
void persona::mostrar_persona(){
    cout << nombre << endl;
    cout << edad << endl;
}
void alumno::mostrar_alumno(){
    mostrar_persona();
    cout << "codigo aluno " << codigo_alumno << "nota " << nota_final << endl;
}


int main(){
    alumno alumno1("Guillermo",20,"a01284015",98.2);
    alumno1.mostrar_alumno();
}
