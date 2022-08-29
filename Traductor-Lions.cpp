//Pregunta10
#include<iostream>
using namespace std;
int main() {
  int M = 35;
  int N = 35;
  long long int dic[N][M];
  dic[0][0] = 1;
  for(int i = 1; i<M; i++){
    dic[i][0] = 1;
    dic[0][i] = 1;
  }
  for(int i = 1; i < N; i ++){
    for(int j = 1; j < M; j++){
      dic[i][j] = dic[i][j-1] + dic[i-1][j];
    }
  }
  int a = 0;
  int b = 0;
  cin >> a;
  cin >> b;
  cout << dic[a-1][b-1];
}
