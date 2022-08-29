#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct punto{
    int x;
    int y;
    int ultimo_x;
    int ultimo_y;
    bool visitado;
};

int main(){
    int n,m,x_inicial,_x_final,y_inicial,y_final;
    cin >> n >> m >> x_inicial >> _x_final >> y_final >> y_final;
    bool maze[n][m];
    for(int y = 0; y < n; y++){
        for(int x = 0; x < m; x++){
            bool a;
            cin >>a;
            maze[y][x] = a;
        }
    }
    punto puntos[n][m];
    for(int y = 0; y < n; y++){
        for(int x = 0; x < m; x++){
            puntos[y][x].x = x;
            puntos[y][x].y = y;
            puntos[y][x].visitado = false;
        }
    }
    //algoritmo
    stack<punto> stk;
    
    stk.push(puntos[x_inicial][y_inicial]);
    puntos[x_inicial][y_inicial].visitado = true;
    while(stk.size() > 0){
        punto actual = stk.top();
        stk.pop();
        int x = actual.x;
        int y = actual.y;
        if(x + 1 < m){
            if(puntos[y][x+1].visitado == false && maze[y][x+1] ==false ){
                stk.push(puntos[y][x+1]);
                puntos[y][x+1].visitado = true;
                puntos[y][x+1].ultimo_x = x;
                puntos[y][x+1].ultimo_y = y;
            }
        }
        if(x - 1 > 0){
            if(puntos[y][x-1].visitado == false && maze[y][x-1] ==false ){
                stk.push(puntos[y][x-1]);
                puntos[y][x-1].visitado = true;
                puntos[y][x-1].ultimo_x = x;
                puntos[y][x-1].ultimo_y = y;
            }
        }
        if(y + 1 < n){
            if(puntos[y+1][x].visitado == false && maze[y+1][x] ==false ){
                stk.push(puntos[y+1][x]);
                puntos[y+1][x].visitado = true;
                puntos[y+1][x].ultimo_x = x;
                puntos[y+1][x].ultimo_y = y;
            }
        }
        if(y - 1 < m){
            if(puntos[y-1][x].visitado == false && maze[y-1][x] ==false ){
                stk.push(puntos[y][x+1]);
                puntos[y-1][x].visitado = true;
                puntos[y-1][x].ultimo_x = x;
                puntos[y-1][x].ultimo_y = y;
            }
        }
    }
    vector<punto> camino;
    punto actual = puntos[y_final][x_inicial];
    for(int i = camino.size(); i >= 0; i--){
        cout << camino[i].x << ' ' << camino[i].y << endl;
    }

}