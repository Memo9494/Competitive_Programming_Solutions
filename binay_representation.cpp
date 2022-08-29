#include<iostream>
#include<cmath>
#include<vector>
#include <bitset>
#include <cassert>
using namespace std;
long long binpower(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int sum_of_digits(int x){
    const int base = 10;
    int digit_sum = 0;
    while(x > 0){
        digit_sum += x%base;
        x = x/base;
    }
    return digit_sum;
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> v;
    vector<int> v1;
    int contador = 0;
    int limit = binpower(10,9);
    for(int i = 1; i <= 81;i++){
        int value = b*binpower(i,a) + c;
        if(value > limit){
            break;
        }
        v1.push_back(value);
    }
    for(int i = 0; i < v1.size(); i++){
        int sum = sum_of_digits(v1[i]);
        if(v1[i] == b*binpower(sum,a) +c){
            v.push_back(v1[i]);
            contador += 1;
        }
    }
    if(contador > 0){
        cout << contador << endl;
        for(int i = 0; i < contador; i++){
            cout << v[i] << endl;
        }
    }
    else{
            cout << 0 << endl;
    }
}
