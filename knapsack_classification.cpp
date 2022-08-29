#include<iostream>
//O(2^n)
using namespace std;
int max_profit(int weight[], int profit[], int w, int n){
    int result;
    if(n == 0 || w == 0)
    {
        return 0;
    }
    if(weight[n] > w){
        result = max_profit(weight,profit,w,n-1);
    }
    else{
        result = max(max_profit(weight,profit,w,n-1),profit[n]+max_profit(weight,profit,w-weight[n],n-1));
    }
    return result;
}
int main(){
    int n,w;
    int array_weight[n];
    int array_profit[n];
    cin >> n >> w;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        array_profit[i] = a;
        array_weight[i] = b;
    }
    cout << max_profit(array_weight,array_profit,w,n) << endl;
}