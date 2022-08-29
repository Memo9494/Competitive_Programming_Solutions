#include<iostream>
using namespace std;
class Rectangulo{
    private:
        int Largo;
        int Ancho;
    public:
        Rectangulo(int,int);
        void area();
        void perimetro();
};
//Constructor
Rectangulo::Rectangulo(int _Largo, int _Ancho){
    Largo = _Largo;
    Ancho = _Ancho;
}
void Rectangulo::area(){
    int _area = Largo * Ancho;
    cout << "area " << _area << endl; 
}
void Rectangulo::perimetro(){
    int _perimetro = Largo*2 + Ancho*2;
    cout << "perimetro " << _perimetro << endl;
}
int main(){
    Rectangulo r1(2,5);
    r1.area();
    r1.perimetro();

}