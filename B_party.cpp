#include<iostream>
#include<vector>
#include<utility>
using namespace std;
struct caso{
    int n,m;
    vector<pair<int,int> > v;
    vector<int> unhappyness;
};
int main(){
    int number;
    cin >> number;
    vector<caso> casos;
    for(int i =0;i<number;i++){
        caso nuevo;
        int a,b;
        cin >> a >> b;
        nuevo.n = a;
        nuevo.m = b;
        for(int j = 0; j < a; j++){
            int un_happy;
            cin >> un_happy;
            nuevo.unhappyness.push_back(un_happy);

        }
        for(int j = 0; j < b; j++){
            pair<int,int> nuevo_par;
            int x,y;
            cin >> x >> y;
            nuevo_par = make_pair(x,y);
            nuevo.v.push_back(nuevo_par);
        }
    }
}