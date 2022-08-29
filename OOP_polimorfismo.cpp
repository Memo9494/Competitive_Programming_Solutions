#include <iostream>
#include <deque>
using namespace std;
class persona{
    private:
    string nombre;
    int edad;
    public:
    persona(string,int);
    //polimorfismo
    virtual void mostrar();
};
class alumno : public persona{
    private:
    int nota;
    public:
    alumno(string,int,int);
    void mostrar();

};
class profesor : public persona{
    private:
    string materia;
    public:
    profesor(string,int,string);
    void mostrar();
};
persona::persona(string _nombre,int _edad){
    nombre = _nombre;
    edad = _edad;
}
alumno::alumno(string _nombre, int _edad, int _nota) : persona(_nombre, _edad){
    nota = _nota;
}
profesor::profesor(string _nombre, int _edad, string _materia) : persona(_nombre,_edad){
    materia = _materia;
}

void persona::mostrar(){
    cout << nombre << endl;
    cout << edad << endl;
}
void alumno::mostrar(){
    persona::mostrar();
    cout << nota << endl;
}
void profesor::mostrar(){
    persona::mostrar();
    cout << materia << endl;
}
int main(){
    persona *vector[3];
    vector[0] = new alumno("Alejandro",20,39);
    vector[0] ->mostrar(); 
    vector[1] = new alumno("Maria",2,0);
    vector[1] ->mostrar();
    vector[2] = new profesor("elmo",99,"algoritmos");
    vector[2] -> mostrar();


}
