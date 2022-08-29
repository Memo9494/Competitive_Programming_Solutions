#include<iostream>
using namespace std;
class punto{
    private: //atributos
        int x,y,z;
    public: //Metodos
        punto();
        void set_punto(int,int,int);
        int getpuntoX();
        int getpuntoY();
        int getpuntoz();

};
class linea : public punto{
    private:
    punto p1,p2;
    public:
    linea();
    void set_linea(punto, punto);
    punto get_p1();
    punto get_p2();
};
punto::punto(){
}
linea::linea() : punto(){
    p1.set_punto(0,0,0);
    p2.set_punto(0,0,0);
}
//Setter - Establecer valores a los atributos
void punto::set_punto(int _x, int _y,int _z){
    x = _x;
    y = _y;
    z = _z;
}
//setter linea
void linea::set_linea(punto _p1, punto _p2){
    p1 = _p1;
    p2 = _p2;
}
//getter
int punto::getpuntoX(){
    return x;
}
//getter
int punto::getpuntoY(){
    return y;
}
int punto::getpuntoz(){
    return z;
}
//getter linea
punto linea::get_p1(){
    return p1;
}
punto linea::get_p2(){
    return p2;
}
int main(){
    punto punto1,punto2,punto3;
    punto1.set_punto(15,10,3);
    punto2.set_punto(10,2,1);
    linea l1;
    l1.set_linea(punto1,punto2);
    punto3 = l1.get_p1();
    cout << punto3.getpuntoX() << endl;

}