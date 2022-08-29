#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i =0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int> pares;
    for(int i = 1;i <=100000;i++){
        if(i%2 != 0){
            pares.push_back(i+1);
        }
        else{
            pares.push_back(i-1);
        }
    }
    vector<int> impares;
    for(int i = 0;i <n;i++){
        int caso = v[i];
        if(caso == 1){
            cout << 1;
        }
        else if(caso%2 != 0){
            cout << caso << ' ';
            for(int j = 1; j < caso;j++){
                cout << j << ' ';
            }
        }
        else{
            for(int j =0; j< caso;j++){
                cout << pares[j] << ' ';
            }
        }
        cout << endl;
    }
}