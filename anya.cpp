// Descripción
// Dado cuatro puntos A, B, C y D determina si la figura ABCD es un cuadrado, un rectángulo, un paralelogramo, un trapezoide o ninguno bajo las siguientes definiciones:

// Cuadrado: Cuadrilátero con cuatro ángulos rectos y cuatro lados del mismo tamaño

// Rectangulo: Cuadrilátero que no es cuadrado pero tiene cuatro ángulos rectos

// Paralelogramo: Cuadrilátero que no tiene ángulos rectos pero cada par de lados opuestos tiene el mismo tamaño e inclinación (son paralelos).

// Trapezoide: Cuadrilátero que tiene dos lados paralelos y dos lados no paralelos.

// Ninguno: No cumple con las últimas descripciones.

// Las figuras no se intersectarán y formarán un cuadrilátero con lados AB, BC, CD y AD.

// Entrada
// Cuatro pares de números enteros X:  y Y:  en distintas líneas correspondiendo a A, B, C y D en ese orden.

// Salida
// Cuadrado, Rectangulo, Paralelogramo, Trapezoide o Ninguno dependiendo de la figura
#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
#include <math.h>
#include <tgmath.h>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int suma = 0;
    for(int i = 0; i < n;i++){
        int regalo = 0;
        cin >> regalo;
        suma = suma + regalo;
    }   
    cout << suma << endl;
}