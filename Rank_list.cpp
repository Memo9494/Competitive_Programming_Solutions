#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
bool ord(pair<int,int> a, pair<int,int>b){
    if(a.first == b.first){
        if(a.second == b.second){
            return a.first > b.first;
        }
        else{
            return a.second < b.second;
        }
    }
    else{
        return a.first > b.first;
        }    
    
}
int main() {
    unsigned int n;
    unsigned int k;
    cin >> n >> k;
    vector<pair<int, int> > v;
    for(int i = 0; i < n; i++){
        int problems;
        int time;
        pair<int,int> paresin;
        cin >> problems >> time;
        paresin = make_pair(problems, time);
        v.push_back(paresin);
    }
    sort(v.begin(),v.end(),ord);
    int contador = 1;
    for(int i = 0; i < n; i++){
        int kreal = k-1;
        if(v[i].first != v[kreal].first && v[i].second != v[kreal].second){
            i = i+1;
        }
        if(i == kreal){
            i = i+1;
        }
        if(v[i].first == v[kreal].first && v[i].second == v[kreal].second){
            contador = contador +1;
        }

    }
    cout << contador << endl;
}
