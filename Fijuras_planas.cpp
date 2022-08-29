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
float angulito(float slope2, float slope1){
    float angulo = atan((slope2-slope1)/(1+slope2*slope1));
    return angulo;
}
float realslope(float ax, float ay, float bx, float by){

    float arriba = (by - ay);
    float abajo = (bx - ax);
    if( arriba == 0){
        return 0;
    }
    else if(abajo == 0){
        return  12345678910;
    }
    else{
        return (arriba/abajo);
    }
}


float lado(float ax, float ay, float bx, float by){
    float x = (bx - ax);
    float y = (by - ay);
    float x2 = pow(x,2);
    float y2 = pow(y,2);
    float d = sqrt(x2 + y2);
    return d;
}

int main() {
    pair<int, int> coordenada[4];
    for(int i = 0; i < 4; i++) {
        int x, y;
        cin >> x >> y; //Lee las coordenadas 
        pair<int, int> punto = make_pair(x, y);
        coordenada[i] = punto;

    }
    float ladoAB = lado(coordenada[0].first,coordenada[0].second,coordenada[1].first,coordenada[1].second);
    float ladoBC = lado(coordenada[1].first,coordenada[1].second,coordenada[2].first,coordenada[2].second);
    float ladoCD = lado(coordenada[2].first,coordenada[2].second,coordenada[3].first,coordenada[3].second);
    float ladoDA = lado(coordenada[3].first,coordenada[3].second,coordenada[0].first,coordenada[0].second);
    float pendienteAB = realslope(coordenada[0].first,coordenada[0].second,coordenada[1].first,coordenada[1].second);
    float pendienteBC = realslope(coordenada[1].first,coordenada[1].second,coordenada[2].first,coordenada[2].second);
    float pendienteCD = realslope(coordenada[2].first,coordenada[2].second,coordenada[3].first,coordenada[3].second);
    float pendienteDA = realslope(coordenada[3].first,coordenada[3].second,coordenada[0].first,coordenada[0].second);
    //buscar angulo
    float anguloAByBC = angulito(pendienteBC,pendienteAB);
    float anguloBCyCD = angulito(pendienteCD,pendienteBC);
    float anguloCDyDA = angulito(pendienteDA,pendienteCD);
    float anguloDAyAB = angulito(pendienteAB,pendienteDA);
    //CUADRADO O RECTANGULO YEAH
    if((pendienteAB == pendienteCD)  && (pendienteBC == pendienteDA)){
        if(ladoAB == ladoBC && ladoBC == ladoCD && ladoCD == ladoDA && ladoDA == ladoAB){
            cout << "Cuadrado" << endl;
        }
        else if( abs(anguloAByBC) > 1.5707 && abs(anguloAByBC) <1.5709){
            cout << "Rectangulo" << endl;
        }
        else{
            cout << "Paralelogramo" << endl;
        }
    
    }
    else if((pendienteAB == pendienteCD) || (pendienteBC == pendienteDA)){
        cout << "Trapezoide" << endl;
    }
    else{
        cout << "Ninguno" << endl;
    }

    //Paralelogramo: Cuadrilátero que no tiene ángulos rectos pero cada par de lados opuestos tiene el mismo tamaño e inclinación (son paralelos).
}