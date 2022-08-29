
#include <iostream>
using namespace std;
 
// Driver Code
int main() {
    int M = 0;
    int N = 0;
    int K = 0;
    int permutacion = 1;
    cin >> M >> N >> K;

    //numero de conbinaciones
    int matriz[M][N];
    if(M == N && N == K){
        int contador = 0;
        for(int i =0; i < N; i++){
            contador = contador + 1;
            permutacion = contador*permutacion;
        }
        cout << permutacion << endl;
    }
    else if(N == 1){
        cout << 1 << endl;
    }
    else if(M == 1){
        permutacion = N;
    }
    else if(N == M && K ==1){
        permutacion = N;
        }
    else if( N == K){
        int factorial = 1;
        int contador = 0;
        for(int i =0; i < N; i++){
            contador = contador + 1;
            factorial = contador*factorial;
        }
        int factorial2 = 1;
        int contador2 = 0;
        int abajo = (N - M);
        for(int i =0; i < abajo; i++){
            contador2 = contador2 + 1;
            factorial2= contador*factorial2;
        }
        permutacion = factorial/(factorial2);
    }
    else{
        int factorial = 1;
        int contador = 0;
        for(int i =0; i < N; i++){
            contador = contador + 1;
            factorial = contador*factorial;
        }
        int factorial2 = 1;
        int contador2 = 0;
        for(int i =0; i < M; i++){
            contador2 = contador2 + 1;
            factorial2= contador*factorial2;
        }
        int factorial3 = 1;
        int contador3 = 0;
        for(int i =0; i < K; i++){
            contador = contador + 1;
            factorial = contador*factorial;
        }
        permutacion = (factorial * factorial2)/factorial3;
    }
}