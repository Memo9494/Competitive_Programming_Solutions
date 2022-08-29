#include<iostream>
using namespace std;
class punto{
    public:
    int x;
    int y;
    punto(int x, int y) {
        this ->x = x;
        this ->y = y;
    }
    void imprimepunto(){
        cout << x << ' ' << y << endl;
    }
};
int main(){
    punto a(6,5);
    a.imprimepunto();
}
