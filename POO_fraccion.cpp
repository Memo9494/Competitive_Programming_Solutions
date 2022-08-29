#include<iostream>
using namespace std;
int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
class fraccion{
	private:
		int	 numerador;
		int	 denominador;

	public:
		fraccion(int n = 0, int d = 1);
        fraccion operator+(const fraccion& f) const;
        fraccion operator-(const fraccion& f) const;
        fraccion operator*(const fraccion& f) const;
        fraccion operator/(const fraccion& f) const;
		void	 mostrar() const;
};
//Inicializa y crea una fracción reducida
fraccion::fraccion(int n, int d) : numerador(n), denominador(d){
	int	mcd = gcd(numerador, denominador);
	numerador = numerador / mcd;
	denominador = denominador / mcd;
}
//Sobrecargar los operadores
fraccion fraccion::operator+(const fraccion& seguna_fraccion) const{
    fraccion resultado;
    resultado.numerador = (numerador * seguna_fraccion.denominador) + (seguna_fraccion.numerador * denominador);
    resultado.denominador = (denominador * seguna_fraccion.denominador);
    int	mcd = gcd(resultado.numerador, resultado.denominador);
	resultado.numerador = resultado.numerador / mcd;
	resultado.denominador = resultado.denominador / mcd;
    return resultado;
}
fraccion fraccion::operator-(const fraccion& seguna_fraccion) const{
    fraccion resultado;
    resultado.numerador = (numerador * seguna_fraccion.denominador) - (seguna_fraccion.numerador * denominador);
    resultado.denominador = (denominador * seguna_fraccion.denominador);
    int	mcd = gcd(resultado.numerador, resultado.denominador);
	resultado.numerador = resultado.numerador / mcd;
	resultado.denominador = resultado.denominador / mcd;
    return resultado;
}
fraccion fraccion::operator*(const fraccion& seguna_fraccion) const{
    fraccion resultado;
    resultado.numerador = (numerador * seguna_fraccion.numerador);
    resultado.denominador = (denominador * seguna_fraccion.denominador);
    int	mcd = gcd(resultado.numerador, resultado.denominador);
	resultado.numerador = resultado.numerador / mcd;
	resultado.denominador = resultado.denominador / mcd;
    return resultado;
}
fraccion fraccion::operator/(const fraccion& seguna_fraccion) const{
    fraccion resultado;
    resultado.numerador = (numerador * seguna_fraccion.denominador);
    resultado.denominador = (denominador * seguna_fraccion.numerador);
    int	mcd = gcd(resultado.numerador, resultado.denominador);
	resultado.numerador = resultado.numerador / mcd;
	resultado.denominador = resultado.denominador / mcd;
    return resultado;
}
void fraccion::mostrar() const{
	cout << endl << numerador << "/" << denominador << endl;
}
int main(){
    fraccion f1(4,5);
    fraccion f2(1,10);
    fraccion f3 = f1 + f2;
    f3.mostrar();
}

