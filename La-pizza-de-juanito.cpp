#include<iostream>
using namespace std;
int main(){
    int n = 0;
    cin >> n;
    int vector2[n-1];
    for(int i = 0; i < n; i++){
        int a = 0;
        cin >> a;
        vector2[i] = a;
    }
    int mayor = vector2[0];
    for(int j = 1; j < n; j++){
        if(vector2[j] > mayor){
            mayor = vector2[j];
        } 
        else {
            continue;
        }
    }
    int estado = mayor*(mayor + 2);
    if (estado%2 == 0){
        cout << "hawaiiana" << endl;
    }
    else{
        cout << "pepperoni" << endl;
    }
}