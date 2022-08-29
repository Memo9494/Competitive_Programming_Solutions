//F
#include<iostream>
using namespace std;
int main() {
  int M = 0;
  int N = 0;
  cin >> N >> M;
  long int dicM[M];
  for(int i = 0; i < M; i++){
      int ayuda = 0;
      cin >> ayuda;
      dicM[i]= ayuda;
  }
  long long int dic[N];
  dic[0] = 1;
  for(int i = 0; i<N; i++){
    dic[i] = 1;
  }
  for(int i = 0; i < M; i ++){
      dic[dicM[i]]= 0;
  }
  int contador = 0;
  for(int i = 0; i < N; i++){
      if(dic[i]+dic[i+1]+dic[i+2] == 3){
          contador = contador + 2;
      }
      else if(dic[i]+dic[i+1]+dic[i+2] == 2){
          contador = contador +1;
      }
      else{
          contador = contador + 0;
      }
  }
  cout << contador << endl;
  
}