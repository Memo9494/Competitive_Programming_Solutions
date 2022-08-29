//pregunta8
#include<iostream>
using namespace std;
int main() {
  int n = 0;
  int R = 0;
  int G = 0;
  int B = 0;
  cin >> n;
  for(int i = 0; i < n; i ++){
    cin >> R;
    cin >> G;
    cin >> B;
    if(B == R && R == G){
      cout << "blanco" << endl;
    }
    else if(R == G && G > B){
      cout << "amarillo" << endl;
    }
    else if(G == B && G > R ){
      cout << "cyan" << endl;
    }
    else if(R == B && R > G ){
      cout << "morado" << endl;
    }
    else if( R > G && R > B ){
      cout << "rojo" << endl;
    }
    else if(G > R && G > B){
      cout << "verde" << endl;
    }
    else if(B > R && B > G){
      cout << "azul" << endl;
    }
  }
}