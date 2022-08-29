//Suma de sumas
#include <iostream>
using namespace std;
int main(){
  int a = 0;
  int b = 0;
  int c = 0;
  cin >> a;
  for(int i = 0; i < a;i++){
    b = b + 1;
    c = c + b*b; 
  }
  cout << c << endl;
}