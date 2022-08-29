#include<iostream>
using namespace std;
void print(char* c){
    int i = 0;
    while(*c != '\0'){
        cout << c[i] << endl;
        c++;
    }
}
int main(){
    char* c = "Hellow";
    cout << c << endl;
    print("Hellow world");
    print(c);
}