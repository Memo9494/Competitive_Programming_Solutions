#include <iostream>
using namespace std;
//pass by value
int square1(int n){
    //address of n in square1 () is not the same as n1 in main()
    cout << "adress of n1 in square():" << &n << "\n";
    //clone modified insisde the function
    n *= n;
    return n;
}
//Pass-by-Reference with Pointer Arguments
void square2(int *n){
    //Adress of n in  square2() is the same as n2 in main()
    cout << "adress of n2 in square2 " << n << "\n" << endl;
    //Explicit de-referencing to get the value pointed-to
    *n *= *n;
}
//pass-by-reference with reference arguments
void square3(int &n){
    //adress of n in square3() is the same as n3 in main()
    cout << "adress of n3 in square3" << &n << "\n";
    // implicit de-referengin (without '*')
    n *= n;
}
void ref(){
    //call-by-value
    int n1 = 8;
    cout << "adress of n1 in main();" << &n1 << "\n";
    cout << "square pf n1: " << square1(n1) << "\n";
    cout << "No change in n1:" << n1 << "\n" << endl;

    //Call-by-reference with pointer arguments
    int n2 = 8;
    cout << "adress of n2 in main(): " << &n2 << endl;
    square2(&n2);
    cout << "square of n2 " << n2 << endl;
    cout << "change reflected in n2" << n2 << endl;

    //Call-by-Referencve with Reference Arguments
    int n3 =8;
    cout << "adress of n3 in main(): " << &n3 << endl;
    square3(n3);
    cout << "square of n3: " << n3 << endl;
    cout << "Change reflected in n3 : " << n3 << endl;
}

int main(){
    ref();
}