#include <iostream>
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