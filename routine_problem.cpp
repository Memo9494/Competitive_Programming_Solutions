#include<iostream>
using namespace std;
int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
struct fraccion{
    int numerador;
    int denominador;
};
int main(){
   int a,b,c,d;
   cin >>a >> b >> c>> d;
   fraccion screen;
   fraccion film;
   int num_screen;
   int num_ 
   if(a/(double)b < c/(double)d){
    respuesta.numerador = b*c-a*d;
    respuesta.denominador = b*c;
    int mcd = gcd(respuesta.numerador,respuesta.denominador);
    respuesta.numerador = respuesta.numerador/mcd;
    respuesta.denominador = respuesta.denominador/mcd;
   }
   //queremos la anchura sobrante puesto que cubriremos la misma altura
   if(a/(double)b > c/(double)d){
    respuesta.numerador = a*d-b*c;
    respuesta.denominador = a*d;
    int mcd = gcd(respuesta.numerador,respuesta.denominador);
    respuesta.numerador = respuesta.numerador/mcd;
    respuesta.denominador = respuesta.denominador/mcd;
   }
   else{
    respuesta.numerador = 0;
    respuesta.denominador = 1;
   }
   cout << respuesta.numerador << '/' << respuesta.denominador << endl;
}