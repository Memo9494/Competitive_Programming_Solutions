#include <iostream>

using namespace std;

int main(){

long int n ;
cin >> n;
int numero[9];
numero[0] = n / 10000000 % 10;
numero[1] = n / 1000000 % 10;
numero[2] = n / 100000 % 10;
numero[3] = n / 10000 % 10;
numero[4] = n / 1000 % 10;
numero[5] = n / 100 % 10;
numero[6] = n / 10 % 10;
numero[7] = n  % 10;

int contador = 0;
for(int i = 0; i < 8; i++){
    bool contar = true;
    if(numero[i] != 0){
        int residuo = n % numero[i];
        if(residuo == 0){
            contador = contador + 1;
        }
    }
}
cout << contador << endl;
}