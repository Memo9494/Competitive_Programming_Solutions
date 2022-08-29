#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
using namespace std;
// bool ord(pair<int,int>a , pair<int,int> b){
//     return a.second < b.second;
// }
// int main() {
//     //llenar datos
//     int n;
//     int k;
//     cin >> n >> k;
//     pair<int,int> par;
//     vector<pair<int,int> > v;
//     int number;
//     for(int i = 0; i < n; i++){
//         cin >> number;
//         par = make_pair(i+1,number);
//         v.push_back(par);
//     }
//     for(int i = 0; i < n-k; i++){
//         int suma = v[i].second;
//         for(int j = 1; j < k; j++){
//             suma = suma + v[i+j].second;
//         }
//         v[i].second = suma;
//     }
//     for(int i = 0; i < k; i++ ){
//         v.pop_back();
//     }
//     sort(v.begin(),v.end(),ord);
//     cout << v[0].first << endl;

// }
// using namespace std;
// bool ord(pair<int,int>a , pair<int,int> b){
//     return a.second < b.second;
// }
int main() {
    //llenar datos
    int n;
    int k;
    cin >> n >> k;
    k = k -1;
    int matriz[n];
    int numero;
    for(int i = 0; i < n; i ++){
        cin >> numero;
        matriz[i] = numero;
    }
    for(int i = 0; i < n; i ++){
        matriz[i+1] = matriz[i]+matriz[i+1];
    }
    int minimo = matriz[k];
    int aux = 0;
    for(int i = 1; i < n-k; i++){
        if((matriz[k+i] - matriz[i-1]) < minimo){
            minimo = matriz[k+i] - matriz[i-1];
            aux = i;
        }
        else{
            continue;
        }
    }
    cout << aux + 1 << endl;   
}