#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>
#include <utility>
#include <vector>
using namespace std;
bool ord2(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
    return a.second > b.second;
}
int main() {
    int n;
    int h;
    int min;
    int matriz[24][60];
    for(int i = 0; i < 24; i++){
        for(int j = 0; j < 60; j++){
            matriz[i][j] = 0;
        }
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> h >> min;
        matriz[h][min] = matriz[h][min] + 1;
    }

    int min2 = 0;
    for(int i = 0; i < 24; i ++){
        for(int j = 0; j < 60; j++){
            if(matriz[i][j] > min2){
                min2 = matriz[i][j];
            }
        }
    }
    cout << min2;
}
