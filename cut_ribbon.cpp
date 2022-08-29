#include<iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
bool ord(int a,int b){
    return a < b;
}
int number_of_cutts(int n, vector<int> v){
    vector<int> cuts;
    cuts[0] = 0;
    cuts[0] = 0;
    cuts[0] = 0;
    int residuo = n;
    return cuts[1];
}
int main(){
    int n,a,b,c;
    vector<int> v;
    cin >> n >> a >> b >> c;
    v.push_back(a);
    v.push_back(b);    
    v.push_back(c);    
    sort(v.begin(),v.end(),ord);
    int answer = number_of_cutts(n,v);
    cout << answer << endl;

    
}