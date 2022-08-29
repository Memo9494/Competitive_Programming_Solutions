#include<iostream>
#include<vector>
using namespace std;
int sum_subsets(int x, int subset[], int size){
    int dp[size+1][x+1];
    for(int i = 0; i < x; i++ ){
        dp[0][i] = 0;
    }
    for(int i = 0; i < size; i++ ){
        dp[i][0] = 1;
    }
    for(int i = i; i < size; i++){
        for(int j = 1; j < x; j++){
            if(subset[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }
            else if(subset[i-1] <= j){
                dp[i][j] = dp[i-1][j] + dp[i-1][j-subset[i-1]];

            }
        }
    }
    for(int i = i; i < size; i++){
        for(int j = 1; j < x; j++){
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }
    return dp[size][x];

}
int main(){
    int subset[5] = {1,2,3,4,5};
    int size = sizeof(subset)/sizeof(subset[1]);
    int x = 10;
    cout << sum_subsets(x,subset,size) << endl;

}