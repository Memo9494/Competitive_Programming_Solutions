#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n1;
    cin >> n1; 
    int apoyo1;
    apoyo1 = n1;
    vector<int> v1;
    while(n1--){
        int x;
        cin >> x;
        v1.push_back(x);
    }

    int n2;
    cin >> n2; 
    int apoyo2;
    apoyo2 = n2;
    vector<int> v2;
    while(n2--){
        int x2;
        cin >> x2;
        v2.push_back(x2);
    }
    int contador = 0;

    for(int i = 0; i < apoyo2; i ++){
        for(int j = 0; j < apoyo1; j++){
            if(v2[i] != v1[j]){
                contador = contador + 1;
            }
            else{
                contador = contador + 1;
                break;
            }
        }
    }



    int contador2 = 0;
    for(int i = 0; i < apoyo2; i ++){
        for(int j = apoyo1-1; j > -1; j--){
            if(v2[i] != v1[j]){
                contador2 = contador2 + 1;
            }
            else{
                contador2 = contador2 + 1;
                break;
            }
        }
    }
    cout << contador<< ' ' << contador2 << endl;
    

}