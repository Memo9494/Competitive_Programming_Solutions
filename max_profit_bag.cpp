#include<iostream>
using namespace std;
int max_profit(int n,int w,int weight[],int profit[]){
    int dp[n+1][w+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= w; j++){
            if(i  == 0|| j== 0){
                dp[i][j] = 0;
            }
            else if(weight[i-1] > j){
                    dp[i][j] = dp[i-1][j];
            }
            else{
                    dp[i][j] = max(dp[i-1][j], profit[i-1] + dp[i-1][w - weight[i-1]]);
            }
        }
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= w; j++){
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }

    return dp[n][w];
}
int main(){
    int n,w;
    n = 3;
    w = 4;
    int table[n+1][w+1];
    int weight[3] = {1,2,3};
    int profit[3] = {2,3,5}; 
    cout << max_profit(n,w,weight,profit) << endl;
}