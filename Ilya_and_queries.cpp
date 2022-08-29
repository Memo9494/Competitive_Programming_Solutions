//easy
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    long long int n;
    cin >> n;
    long long int queries[n][2];
    for(long long int i = 0; i < n; i++){
        long long int l,r;
        cin >> l >> r;
        queries[i][0] = l-1;
        queries[i][1] = r-1;
    }
    long long int size = str.size();
    long long int window[size];
    window[0] = 0;
    for(long long int i = 1; i < size; i++){
        if(str[i-1] == str[i]){
            window[i] = 1;
        }
        else{
            window[i] = 0;
        }
    }
    for(long long int i = 1; i <size; i ++){
        window[i] += window[i-1];
    }
    for(long long int i = 0; i < n;i++){
        long long int resta = window[queries[i][1]] - window[queries[i][0]];
        cout << resta << endl;
    }
}
