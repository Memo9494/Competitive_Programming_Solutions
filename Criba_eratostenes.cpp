#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
vector<int> eratostenes(int n){
    vector<int> v;
    bool arreglo[n];
    for(int i = 0; i <= n; i++){
        arreglo[i] = true;
    }
    arreglo[0] = false;
    arreglo[1] = false;
    for(int i = 2; i < sqrt(n); i ++){
        for(int j = i + 1; j <= n; j++){
            if(j%i == 0){
                arreglo[j] = false;
            }
        }
    }
    for(int i = 0; i <=n;i++){
        if(arreglo[i]){
            v.push_back(i);
        }
    }
    return v;
}

int main() {
    //criba de eratostenes
    int n;
    cin >> n;
    vector<int> v;
    v = eratostenes(n);
    for(int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }
}