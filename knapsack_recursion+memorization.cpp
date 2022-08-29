//DP MEMO
#include<iostream>
using namespace std;
int max_profit(int weight[], int profit[], int w, int n){
    int matriz[n+1][w+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <=w;j++){
            if(i == 0 || j == 0){
                matriz[i][j] = 0;
            }
            else if(weight[i-1] > j) {
                matriz[i][j] = matriz[i-1][j];
            }
            else{
                matriz[i][j] = max(matriz[i-1][j], profit[i-1] + matriz[i-1][w-weight[i-1]]);
            }
        }
    }
    return matriz[n][w];
}


int main(){
    int n = 3;
    int w = 4;
    int weight[] = {1,2,3};
    int profit[] = {2,3,5};
    cout << max_profit(weight,profit,w,n) << endl; 
}