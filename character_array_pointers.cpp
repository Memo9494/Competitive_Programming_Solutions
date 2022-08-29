#include <iostream>
#include <string>
#include<cstring>
using namespace std;
int main() {
    char C[] = "JOHN";
    int len = strlen(C);
    int size = sizeof(C);
    cout << size << endl;
    cout << len << endl;
    cout << C << endl;

}