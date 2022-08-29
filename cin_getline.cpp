#include<iostream>
using namespace std;
int main(){
    //cin ignora tab y return antes de leer y para en un tab o espacio
    //getline para hasta un enter
    int n;
    string line;
    cout << "teclea n" << endl;
    cin >> n;
    cin.ignore();//eliminar el enter del flujo de entreda
    
    cout << "teclea la linea" << endl;
    getline(cin,line);
    cout << "n = " << n << " line = <" << line << ">" << endl;
}