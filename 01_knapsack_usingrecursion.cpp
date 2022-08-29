//Haz un programa que dicte el ángulo entre las manecillas del reloj a cualquier hora
#include<iostream>
#include<cmath>
#include<utility>
using namespace std;
double angulo(double h, double m){
    double pi = 3.14159265358979323846;
    double v_x = cos(h * 2*pi/12) + cos(m * 2*pi/60);
    double v_y = sin(h * 2*pi/12) + sin(m * 2*pi/60);
    double angulo = atan(v_y/v_x);
    return angulo;
}
int main(){
    int h,m;
    h = 6;
    m = 30;
    double answer = abs(angulo(h,m))*57.296;
    cout << round(answer) << endl;
}