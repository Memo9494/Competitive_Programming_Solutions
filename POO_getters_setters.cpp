#include<iostream>
using namespace std;
class punto{
    private: //atributos
        int x,y;
    public: //Metodos
        punto();
        void set_punto(int,int);
        int getpuntoX();
        int getpubtoY();

};
punto:: punto(){
}
//Setter - Establecer valores a los atributos
void punto::set_punto(int _x, int _y){
    x = _x;
    y = _y;
}
int punto::getpuntoX(){
    return x;
}
int punto::getpubtoY(){
    return y;
}


int main(){
    punto punto1;
    punto1.set_punto(15,10);
    cout <<punto1.getpuntoX() << endl;
    cout << punto1.getpubtoY() << endl;

}
