#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    for(int i = 0; i < n; i++ ){
        int x,y,z;
        cin >> x >> y >> z;
        v[0] = v[0] + x;
        v[1] = v[1] + y;
        v[2] = v[2] + z;
    }
    if(v[0] == 0 && v[1] == 0 && v[2] == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}