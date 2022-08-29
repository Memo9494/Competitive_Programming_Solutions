//Table to remember solutions
//DP
//solve subproblems to solve big problem
#include<iostream>
using namespace std;
int max_profit(int n, int w, int weight[],int profit[]){
    int table[n+1][w+1];
    for(int i = 0;i <=n;i++ ){
        for(int j = 0; j<=w;j++){
            if(i == 0 || j == 0){
                table[i][j] = 0;
            }
            else if(weight[i-1] > j){
                table[i][j] = table[i-1][j];
            }
            else{
                table[i][j] = max(table[i-1][j],profit[i-1]+table[i-1][w-weight[i-1]]);
            }
        }
    }
    return table[n][w];
}
int main(){
    int n,w;
    n = 4;
    w = 10;
    int table[n+1][w+1];
    int weight[4] = {5,1,2,3};
    int profit[4] = {1000,2,3,5}; 
    cout << max_profit(n,w,weight,profit) << endl;
}