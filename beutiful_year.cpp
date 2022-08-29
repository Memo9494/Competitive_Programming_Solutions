#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int year;
    cin >> year;
    year = year + 1;
    bool amigo = true;
    while(amigo == true){
    int numero[4];
    numero[0] = year/1000 % 10;
    numero[1] = year/100 % 10;
    numero[2] = year/10 % 10;
    numero[3] = year % 10;
        if(numero[0] == numero [1] || numero[0] == numero [2] || numero[0] == numero [3] || numero[1] == numero [2] || numero[1] == numero [3]  || numero[2] == numero [3] ){
            year = year + 1;
        }
        else{
            cout << year << endl;
            amigo = false;
        }
    }
}