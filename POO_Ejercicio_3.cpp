#include <iostream>
#include <deque>
using namespace std;
class persona{
    private:
    string nombre;
    int edad;
    bool sexo;
    public:
    persona(string,int,bool);
    void mostrar_persona();
};
class empleado : public persona{
    private:
    string empresa;
    int salario;
    public:
    empleado(string,int,bool,string,int);
    void mostrar_empleado();

};
class estudiante : public persona{
    private:
    int nota;
    public:
    estudiante(string,int,bool,int);
    void mostrar_estudiante();
};
class universitario : public estudiante{
    private:
    bool titulo;
    public:
    universitario(string,int,bool,int,bool);
    void mostrar_univesitario();
};



persona::persona(string _nombre, int _edad, bool _sexo){
    nombre = _nombre;
    edad = _edad;
    sexo = _sexo;
}
empleado::empleado(string _nombre,int _edad, bool _sexo, string _empresa, int _salario) : persona(_nombre,_edad,_sexo){
    empresa = _empresa;
    salario = _salario;
}
estudiante::estudiante(string _nombre, int _edad, bool _sexo, int _nota) : persona(_nombre,_edad,_sexo){
    nota = _nota;
}
universitario::universitario(string _nombre, int _edad, bool _sexo, int _nota, bool _titulo) : estudiante(_nombre,_edad,_sexo,_nota){
    titulo = _titulo;
}

void persona::mostrar_persona(){
    cout << nombre << ' ' << edad << ' ';
    if(sexo == true){
        cout << "hombre" << endl;
    }
    else{
        cout << "mujer" << endl;
    }
}
void empleado::mostrar_empleado(){
    mostrar_persona();
    cout << empresa << ' ' << "$$$$" << salario << endl;
}
void estudiante::mostrar_estudiante(){
    mostrar_persona();
    cout << "nota " << nota << endl;
}
void universitario::mostrar_univesitario(){
    mostrar_estudiante();
    if(titulo == false){
        cout << "no tiene titulo" << endl;
    }
    else{
        cout << "Tiene titulo" << endl;
    }
}


int main(){
    persona memo("Memo",20,1);
    memo.mostrar_persona();
    empleado romeo("Romeo",45,1,"Maiz",4000);
    romeo.mostrar_empleado();
    estudiante andrea("andrea",23,0,99);1
    andrea.mostrar_estudiante();
    universitario Guillermo("LaMoni",20,0,99,1);
    Guillermo.mostrar_univesitario();

}
