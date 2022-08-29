#include<iostream>
using namespace std;
long long int gcd (long long int a, long long int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
class fraccion{
	private:
		long long int	 numerador;
		long long int	 denominador;

	public:
		fraccion(long long int n = 0, long long int d = 1);
        fraccion operator+(const fraccion& f) const;
        fraccion operator-(const fraccion& f) const;
        fraccion operator*(const fraccion& f) const;
        fraccion operator/(const fraccion& f) const;
		void	 mostrar() const;
};
//Inicializa y crea una fracción reducida
fraccion::fraccion(long long int n, long long int d) : numerador(n), denominador(d){
	long long int	mcd = gcd(numerador, denominador);
	numerador = numerador / mcd;
	denominador = denominador / mcd;
}
//Sobrecargar los operadores
fraccion fraccion::operator+(const fraccion& seguna_fraccion) const{
    fraccion resultado;
    resultado.numerador = (numerador * seguna_fraccion.denominador) + (seguna_fraccion.numerador * denominador);
    resultado.denominador = (denominador * seguna_fraccion.denominador);
    long long int	mcd = gcd(resultado.numerador, resultado.denominador);
	resultado.numerador = resultado.numerador / mcd;
	resultado.denominador = resultado.denominador / mcd;
    return resultado;
}
fraccion fraccion::operator-(const fraccion& seguna_fraccion) const{
    fraccion resultado;
    resultado.numerador = (numerador * seguna_fraccion.denominador) - (seguna_fraccion.numerador * denominador);
    resultado.denominador = (denominador * seguna_fraccion.denominador);
    long long int	mcd = gcd(resultado.numerador, resultado.denominador);
	resultado.numerador = resultado.numerador / mcd;
	resultado.denominador = resultado.denominador / mcd;
    return resultado;
}
fraccion fraccion::operator*(const fraccion& seguna_fraccion) const{
    fraccion resultado;
    resultado.numerador = (numerador * seguna_fraccion.numerador);
    resultado.denominador = (denominador * seguna_fraccion.denominador);
    long long int	mcd = gcd(resultado.numerador, resultado.denominador);
	resultado.numerador = resultado.numerador / mcd;
	resultado.denominador = resultado.denominador / mcd;
    return resultado;
}
fraccion fraccion::operator/(const fraccion& seguna_fraccion) const{
    fraccion resultado;
    resultado.numerador = (numerador * seguna_fraccion.denominador);
    resultado.denominador = (denominador * seguna_fraccion.numerador);
    long long int	mcd = gcd(resultado.numerador, resultado.denominador);
	resultado.numerador = resultado.numerador / mcd;
	resultado.denominador = resultado.denominador / mcd;
    return resultado;
}
void fraccion::mostrar() const{
	cout << endl << numerador << "/" << denominador << endl;
}
int main(){
    fraccion f1(999,998);
    fraccion f2(997,996);
    fraccion f3 = f1 - f2;
    f3.mostrar();
}