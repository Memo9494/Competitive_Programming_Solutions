#include <iostream>
#include <vector>
using namespace std;
int main() {
    long int y;
    long int n;
    long int k;
    cin >> y >> k >> n;
    long int suma;
    long int x;
    vector<int> v;
    //obtener primera iteracion
    x= k - y%k;
    suma = n-y;
    if(x<=suma){
        v.push_back(x);
        x = x + k;
        while(x <= suma){
            v.push_back(x);
            x = x + k;
        }
    }
    else{
        cout << -1 << endl;
    }

    for(long int i = 0; i < v.size(); i++){
            cout << v[i] << ' ';
    }
}