#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    //LLENAR DATOSS
    int quantity;
    cin>>quantity;
    int number;
    vector<int> numbers;
    for(int i=0; i<quantity; ++i){
        cin>>number;
        numbers.push_back(number);
    }
    int quantity2;
    cin>>quantity;
    int number2;
    vector<int> numbers2;
    for(int i=0; i<quantity2; ++i){
        cin>>number2;
        numbers2.push_back(number2);
    }
    //LLENAR DATOSS


    //busqueda inicio-fin
    int contador = 0;
    for(int i = 0; i < quantity2; i++){
        for(int j = 0; j < quantity; i++ ){
            if(numbers2[i] != numbers[j]){
                contador = contador + 1;
            }
            else{
                j = quantity +1;
            }
        }
    }
    //busqueda fin-inicio
    int contador2 = 0;
    for(int i = 0; i < quantity2; i++){
        for(int j = quantity; j > 0; i-- ){
            if(numbers2[i] != numbers[j]){
                contador = contador + 1;
            }
            else{
                j = quantity +1;
            }
        }
    }
    cout << contador << ' ' << contador2;

}