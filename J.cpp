#include<iostream>
#include<cmath>
#include <string>
#include <vector>

using namespace std;
int main() {
    int n_mesas = 0;
    int n_presentaciones = 0;
    cin >> n_mesas >> n_presentaciones;
    int mesas[n_mesas];
    string pp;
    vector<int> vectorsito;
    while( getline( cin, pp, ' ' ) )
    {
    vectorsito.push_back(stoi(pp));
    }

    for(int i = 0; i < n_mesas; i++){
        int arroz = 0;
        cin >> arroz;
        mesas[i] = arroz;
    }
    int residuo_fin[n_mesas];
    //residuo de cada mesa
    for(int i = 0; i < n_mesas; i++){
        int arroz = mesas[i];
        int residuo = 0;
        for(int j = 0; j < vectorsito.size(); j++){
            sort(vectorsito.begin(),vectorsito.end());
            int demanda = vectorsito[j];
            if(demanda < arroz){
                residuo = demanda - arroz;
                residuo_fin[i] = residuo;
            }
            else if(arroz % demanda == 0){
                residuo = 0;
                residuo_fin[i] = residuo;              
            }
            else if(arroz % demanda == 1){
                residuo = 1;
                residuo_fin[i] = residuo;

            }
            else{
                continue;
            }

            }


        }
    for(int i = 0; i < n_mesas; i++){
        cout << residuo_fin[i] << endl;
    }

    }