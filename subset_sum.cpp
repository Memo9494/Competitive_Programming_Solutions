#include <iostream>
using namespace std;
//recursive formula
bool is_there_subset_sum(int set[], int size, int sum){
    bool dp[size+1][sum+1];
    for(int i = 0; i <= sum; i++){
        dp[0][i] = false;
    }
    for(int i = 0; i <= size; i++){
        dp[i][0] = true;
    }
    for(int i = 1; i <= size; i++){
        for(int j = 1; j<=sum;j++){
            if(set[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j] || dp[i-1][j-set[i-1]];
            }
        }
    }
    for(int i = 0; i <= size; i++){
        for(int j = 0; j<=sum;j++){
            cout << dp[i][j] << ' ';

        }
        cout << endl;
    }
    return dp[size+1][sum+1];
}
// Driver code
int main()
{
	int set[] = {3,4,5,2};
	int sum = 6;
	int size = sizeof(set) / sizeof(set[0]);
    cout << is_there_subset_sum(set,size,sum) << endl;
    for(int i = 0; i < size; i++){
        cout << set[i] << ' ';
    }
    cout << endl;
}
