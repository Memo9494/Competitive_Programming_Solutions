#include<iostream>
using namespace std;
class Tiempo{
    private:
        int horas;
        int minutos;
        int segundos;
    public:
        Tiempo(int,int,int);
        Tiempo(int);
        void mostrar_tiempo();
};

//Constructor
Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}
Tiempo::Tiempo(int tiempo){
    horas = tiempo/3600;
    minutos = (tiempo%3600)/60;
    segundos = (tiempo%3600)%60;
}
void Tiempo::mostrar_tiempo(){
    cout << horas << ' ' << minutos << ' ' << segundos << endl;
}
int main(){
    Tiempo lol(36064);
    Tiempo lol1(12,5,23);
    lol.mostrar_tiempo();
    lol1.mostrar_tiempo();
}