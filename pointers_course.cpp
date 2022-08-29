#include<iostream>
using namespace std;
void sum_of_elements(int A[],int size){
    int i, sum = 0;
    for(i = 0; i < size;i++ ){
        A[i]= 2*A[i];
    }
}
int main(){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    sum_of_elements(A,size);
    for(int i = 0; i < size-1; i++){
        cout << A[i] << endl;
    }
}



