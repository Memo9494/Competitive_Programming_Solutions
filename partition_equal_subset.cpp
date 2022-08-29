#include<iostream>
#include<vector>
using namespace std;
bool is_partition_equal_sum(int target,vector<int> set){
    if(target%2 != 0){
        return false;
    }
    else{
        target = target/2;
        //dp subset sum
        int size = set.size();
        bool matrix[size+1][target+1];
        for(int i = 0; i <= target;i++){
            matrix[0][i] = false;
        }
        for(int i = 0; i<= size; i++){
            matrix[i][0] = true;
        }
        for(int i = 1; i <= size; i ++){
            for(int j = 1; j <= target; j++){
                if(set[j-1 > j]){
                    //here we include or excluded based on what did our previous iteration achieved
                    matrix[i][j] = matrix[i-1][j];

                }
                else{
                    //here we include or exclude based on what our previous iteration achieved and also by our own means
                    //if we include we are goin no get back one element beacause we did included it, but we are also going to update the sum by substracting the element we are in
                    matrix[i][j] = matrix[i-1][j-set[i-1]] || matrix[i-1][j];
                }
            }
        }
        return matrix[size][target];

    }
}
int main(){
    int n,target;
    vector<int> set;
    cin >> target;
    cin >> n;
    for(int i = 0; i < n; i++){
        int numero;
        cin >> numero;
        set.push_back(numero);
    }
    cout << is_partition_equal_sum(target,set);


}