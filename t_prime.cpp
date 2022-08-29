#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
bool probablyPrimeFermat(int n, int iter=5) {
    if (n < 4)
        return n == 2 || n == 3;

    for (int i = 0; i < iter; i++) {
        int a = 2 + rand() % (n - 3);
        if (binpow(a, n - 1, n) != 1)
            return false;
    }
    return true;
}
int main(){
    int n1;
    long long int x;
    cin >> n1;
    vector<long long int> v;
    for(int i = 0; i < n1; i++){
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size();i++){
        long long int raiz = (long long int)sqrt(v[i]);
        if(raiz*raiz == v[i] && probablyPrimeFermat(raiz)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


}