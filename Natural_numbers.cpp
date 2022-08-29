#include <iostream>
#include <vector>
using namespace std;
int main() {
    unsigned long long int n;
    unsigned long long int k;
    cin >> n >> k;
    unsigned long long int n1;
    unsigned int mitad;
    if(n%2 != 0){
        mitad = n/2 + 1;
    }
    else{
        mitad = n/2;
    }
    if(mitad == k){
        n1 = 2*k-1;
    }
    else if(k < (mitad)){
        n1 = 2*k-1;
    }
    else{
        unsigned long long int lol = k - mitad;
        n1 = 2*lol;
    }
    cout << n1 << endl;

}