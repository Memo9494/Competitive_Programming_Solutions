#include <iostream>
using namespace std;
class punto {
    private:
    int x;
    int y;
    public:
    punto(int x_inicial, int y_inicial) {
        x = x_inicial;
        y = y_inicial;
    }
    void imprime_punto(){
        cout << x << ' ' << y << endl;
    }
    punto operator+(const punto& p) {
        punto suma(x + p.x, y + p.y);
        return suma;
    }
};
int main(){
    punto p1(2,3);
    punto p2(3,4);
    punto p3 = p1+p2;
    p3.imprime_punto();
}