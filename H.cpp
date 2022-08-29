#include <iostream>
#include<cmath>

using namespace std;

int main(){

int n;
cin >> n;

if( n%4 == 0){
    int lado = n/4;
    int area = pow(lado,2);
    cout << area << endl;
}
else if(n%4 > 1){
    int lado_corto = n/4;
    int lado_largo = n/4 + 1;
    int area = lado_corto * lado_largo;
    cout << area << endl;
}

else{
    int lado = n/4;
    int area = pow(lado,2);
    cout << area << endl;

}
}